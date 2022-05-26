# Google testing and mocking framework for C++.
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
http_archive(
    name="com_google_googletest",
    urls=["https://github.com/google/googletest/archive/release-1.8.1.zip"],
    strip_prefix="googletest-release-1.8.1",
    sha256="927827c183d01734cc5cfef85e0ff3f5a92ffe6188e0d18e909c5efebf28a0c7",
)

http_archive(
    name="com_google_protobuf",
    sha256="d0f5f605d0d656007ce6c8b5a82df3037e1d8fe8b121ed42e536f569dec16113",
    strip_prefix="protobuf-3.14.0",
    urls=[
        "https://mirror.bazel.build/github.com/protocolbuffers/protobuf/archive/v3.14.0.tar.gz",
        "https://github.com/protocolbuffers/protobuf/archive/v3.14.0.tar.gz",
    ],
)

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")

protobuf_deps()

# Skydoc, documentation generator for custom Bazel rules.
#http_archive(
#    name = "io_bazel_rules_sass",
#    url = "https://github.com/bazelbuild/rules_sass/archive/1.17.2.zip",
#    strip_prefix = "rules_sass-1.17.2",
#    sha256 = "e5316ee8a09d1cbb732d3938b400836bf94dba91a27476e9e27706c4c0edae1f",
#)

# Fetch required transitive dependencies. This is an optional step because you
# can always fetch the required NodeJS transitive dependency on your own.
#load("@io_bazel_rules_sass//:package.bzl", "rules_sass_dependencies")
#rules_sass_dependencies()

# Setup repositories which are needed for the Sass rules.
#load("@io_bazel_rules_sass//:defs.bzl", "sass_repositories")
#sass_repositories()

# Setup the NodeJS toolchain
#load("@build_bazel_rules_nodejs//:defs.bzl", "node_repositories")
#node_repositories()

http_archive(
    name="io_bazel_skylib",
    urls=["https://github.com/bazelbuild/bazel-skylib/archive/0.7.0.zip"],
    sha256="bce240a0749dfc52fab20dce400b4d5cf7c28b239d64f8fd1762b3c9470121d8",
)

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name="io_bazel_skydoc",
    remote="https://github.com/bazelbuild/skydoc.git",
    tag="0.3.0",
)

#load("@io_bazel_skydoc//:setup.bzl", "skydoc_repositories")
#skydoc_repositories()
#
#load("@io_bazel_rules_sass//:package.bzl", "rules_sass_dependencies")
#rules_sass_dependencies()
#
#load("@build_bazel_rules_nodejs//:defs.bzl", "node_repositories")
#node_repositories()
#
#load("@io_bazel_rules_sass//:defs.bzl", "sass_repositories")
#sass_repositories()
