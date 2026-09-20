# waylib-shared

[中文说明](README.zh_CN.md)

This standalone package builds Waylib **0.7.0**, its matching native wlroots
**0.20.2** shared library, and the `WaylibShared.QuickSharedServer` QML module
(import version **1.0**). It also installs development headers, CMake/pkg-config
metadata and the protocol generator needed by DeckShell.

## Dependencies

Use Linux, a C++20 compiler, CMake 3.25+, Make or Ninja and pkg-config. Initialize this
repository's `3rdparty/wlroots` submodule; no separate system wlroots is used.

Required development dependencies for the default configuration:

- Qt 6.8+ Core, Gui, Qml, Quick, QmlIntegration and matching Gui/Quick Private
  headers; Qt Test when `BUILD_WAYLIB_TESTS=ON`.
- Wayland client/server 1.26+, wayland-scanner, wayland-protocols 1.49+,
  wlr-protocols, libdrm 2.4.134+, pixman 0.46.4+, xkbcommon and XCB.
- libudev, libseat 0.2+, libdisplay-info, hwdata, libinput 1.19+;
  EGL, GLESv2, GBM, Vulkan headers/loader and glslang;
  lcms2, Xwayland and the XCB dri3, present, render, renderutil, shm, xfixes,
  xinput, composite, ewmh, icccm and res development modules.
- libliftoff 0.4+ and xcb-errors are optional; their absence is reported and
  disables only those integrations.

The remote-subsurface XML is bundled in `waylib/protocols/` with its matching
implementation. No DeckShell checkout, `DeckCompositorProtocols` package,
external XML directory or build-time download is required. See the
[protocol source record](waylib/protocols/README.md) for provenance and updates.

## Build, test and install

From a complete checkout (including the native submodule), the default
Unix Makefiles entry builds the shared libraries and QML module:

```sh
git submodule update --init --recursive
mkdir build-default
cd build-default
cmake .. && make -j10
```

For a Ninja build with tests and a private installation, run from the repository root:

```sh
git submodule update --init --recursive
waylib_prefix="$PWD/_local/waylib"
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Debug \
  -DCMAKE_INSTALL_PREFIX="$waylib_prefix" \
  -DTREELAND_INSTALL_DEV=ON -DBUILD_WAYLIB_TESTS=ON
cmake --build build --parallel 6
ctest --test-dir build --no-tests=error --output-on-failure
cmake --install build
```

`TREELAND_INSTALL_DEV` defaults to `ON` for standalone builds; `OFF` installs
runtime only. Tests/examples default to `OFF`; enable examples with
`BUILD_WAYLIB_EXAMPLES=ON`. Core libraries are always shared.
Missing bundled XML fails configuration as incomplete source, without fallback.
`WAYLIB_TREELAND_PROTOCOLS_DIR` is retired: old cache values are ignored with a
warning. Use a fresh build directory when migrating; embedded builds use the
same bundled input as standalone builds.
The `WITH_SUBMODULE_WAYLIB` option belongs to DeckShell, not this library entry.

## Consume the installed package

```cmake
find_package(WaylibShared 0.7.0 REQUIRED COMPONENTS SharedServer)
target_link_libraries(my_app PRIVATE WaylibShared::SharedServer)
```

The target propagates C++20 and its required dependencies. Direct native users
link `WaylibShared::waylib-wlroots`. Protocol consumers call
`waylib_generate_qtwayland_server_protocol(target PROTOCOL /path/file.xml
BASENAME file PREFIX zwp_ PRIVATE_CODE)` and link Qt Core plus wayland-server.
The helper runs the installed `WaylibShared::qtwaylandscanner`; no source-tree
helper or tool build is needed. The matching virtual-keyboard XML is in
`WaylibShared_WLROOTS_PROTOCOLS_DIR`.

CMake also provides `WaylibShared_LIBDIR`, `WaylibShared_PKGCONFIG_DIR` and
`WaylibShared_QML_IMPORT_DIR`. pkg-config users select that pc directory and
request `WaylibSharedServer`; they must explicitly compile as C++20 or newer.

```sh
cmake -S test_project -B build-consumer -G Ninja \
  -DCMAKE_PREFIX_PATH="$waylib_prefix"
cmake --build build-consumer --parallel 6
ctest --test-dir build-consumer --no-tests=error --output-on-failure
```

See [consumer checks](test_project/README.md) for test coverage and isolation
requirements. Qt-only hosts can import `WaylibShared.QuickSharedServer` and
create `DynamicCreator` by setting `QML_IMPORT_PATH` to the package's QML import
root. The package owns the plugin, qmldir, qmltypes and both runtime libraries.
No `LD_LIBRARY_PATH` or original build directory is required for plugin loading.
Applications still need normal executable deployment/RUNPATH configuration.

## Layout, relocation and compatibility

Relative GNUInstallDirs defaults support `cmake --install build --prefix NEW`
and moving the whole installation. CMake, pkg-config, the generator and QML
plugin then use the new package. Reconfigure consumers against the new prefix.
Custom layouts are supported, for example:

```sh
cmake -S . -B build-custom -G Ninja \
  -DCMAKE_INSTALL_PREFIX="$PWD/_local/custom" \
  -DCMAKE_INSTALL_LIBDIR=lib64 \
  -DCMAKE_INSTALL_INCLUDEDIR=include/native-custom \
  -DWAYLIB_INCLUDE_INSTALL_DIR=include/waylib-custom \
  -DWAYLIB_QML_INSTALL_DIR=share/waylib-qml
cmake --build build-custom --parallel 6
cmake --install build-custom
```

On platforms that do not search `lib64` via `CMAKE_PREFIX_PATH`, pass
`-DWaylibShared_DIR=/new/prefix/lib64/cmake/WaylibShared` to the consumer.

The plugin's library lookup is computed from the actual QML/libdir layout.
Explicit absolute install directories retain fixed-location semantics and are
not promised to move with the prefix. Do not assume the libdir is named `lib`.

Waylib package/component/pc/DSO versions all come from `VERSION`; native wlroots
and QML import versions have separate meanings. CMake accepts the same Waylib
minor release series. This is not a promise of general binary compatibility:
Qt Private requires the same Qt build (development metadata requests its exact
version), and Waylib/native development and runtime files must stay paired.
Do not substitute a system wlroots or mix installations.

## License

Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only. The bundled
remote-subsurface XML is MIT-licensed. See `LICENSES/` and its copyright header.
