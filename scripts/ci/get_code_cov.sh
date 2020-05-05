#!/bin/bash

echo "Calculating code coverage for directory: $1"

# for macOS it will be gcov
GCOV_BIN=gcov-5

for filename in `find $1 -type f \( -name "*.cpp" -not -name "moc_*.cpp" \)`;
do
    echo "Processing $filename"
    $GCOV_BIN -o . "$filename" > /dev/null;
done
