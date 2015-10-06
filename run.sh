#!/bin/sh

# Compile all the files
make clean
make

cd 02_Seeing_Stars
./star_shell.sh

# Run code coverage
CFILES = find . -name '*.c'
for f in $CFILES
do
    echo $f
    gcov $f
done

