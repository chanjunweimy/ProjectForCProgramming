# Test star.c

while read line; do
    echo $line | ./star.o
    gcov star.c
done < star_test.txt
