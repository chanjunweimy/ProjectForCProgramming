### Problem Taken from CS1020E AY2015/16 Lab1 Transformation

### Problem Description
Given  a  2  dimensional  matrix,  output  the  final  state  of  the  matrix  after  performing  the  given operations. There are 2 valid operations:

1.**Rotate X**
    -Rotate the matrix by X degree, X can be 90, 180, or 270clockwise.
2.**Reflect x**
    -Reflect the matrix across the x-axis.
3.**Reflect y**
    -Reflect the matrix across the x-axis

### Input
The first line of the input contains one integers, **N** (1 <=  **N** <= 100).The next line is an array with size **N**x**N**. The next line is an integer **K** (1 <= **K** <= 100), where **K** is the number of operations performed. The next line is the query with format “Rotate **x**“, (**x** ∈{**90, 180, 270}**), “Reflect **x**” or “Reflect **y**”

### Output
The output is the final state of the matrix.

### Sample Input
3
1 2 3
4 5 6
7 8 9
3
Rotate 90
Reflect x
Reflect y

### Sample Output
3 6 9
2 5 8
1 4 7

### Explanation
1. Initial matrix:
1 2 3
4 5 6
7 8 9

2. After 90&deg; rotation:
7 4 1
8 5 2
9 6 3

3. After reflection across x axis:
9 6 3
8 5 2
7 4 1

4. After reflection across y axis:
3 6 9
2 5 8
1 4 7
