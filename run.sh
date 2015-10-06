#!/bin/sh

# Compile all the files
make clean
make

cd 02_Seeing_Stars
./star_shell.sh

# Run code coverage
#for f in $(find . -name '*.c');
#do
#    echo $f;
#    gcov $f;
#done
