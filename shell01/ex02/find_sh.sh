#!/bin/bash
find . -type f -iname "*.sh" -exec basename -s .sh {} \;