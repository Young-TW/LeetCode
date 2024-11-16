#!/usr/bin/env bash

find . -name '*.cpp' -exec clang-format -i {} \;
find . -name '*.rs' -exec rustfmt {} \;
black .
