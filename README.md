# ATEI Programming Methodologies

This repository contains solutions to the lab exercises for ATEI's Programming Methodologies course.

## Compiling

A `compile` and a `compile-debug` shell scripts are included, which compile all .cc files in the `src` directory with Clang++ and output the executable with the same name (but no file extension) to the `out` directory.

`compile-debug` runs Clang++ with the `-g` option to generate debug info for use with GDB.