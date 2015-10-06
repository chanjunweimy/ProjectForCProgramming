# Test star.c

while read line; do
    echo $line | ./star.o
done < star_test.txt
