# Test star.c
clang -coverage -O0 star.c -o star.o
while read line; do
    echo $line | ./star.o
    gcov star.c
done < star_test.txt
