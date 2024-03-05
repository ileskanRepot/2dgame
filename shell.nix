{ pkgs ? import <nixpkgs> {} }:
  pkgs.mkShell {
    nativeBuildInputs = with pkgs; [
      gcc
      gdb
      unzip
      valgrind
      clang-tools
      man-pages
    ];
  }
