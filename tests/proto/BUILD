load("//platformio:platformio.bzl", "platformio_proto_library", "platformio_project")

package(default_visibility = ["//visibility:public"])

proto_library(
    name = "example_proto",
    srcs = ["example.proto"],
)

cc_proto_library(
    name = "example_cc_proto",
    deps = [":example_proto"],
)

platformio_proto_library(
    name = "example_platformio_proto",
    proto = ":example_cc_proto",
)

platformio_project(
    name = "proto_printer",
    src = "proto_printer.cc",
    board = "nodemcuv2",
    framework = "arduino",
    platform = "espressif8266",
    deps = [
        ":example_platformio_proto",
    ],
)
