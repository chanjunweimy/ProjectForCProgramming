### Problem Taken from CS1020E AY2015/16 Lab1 Land

### Problem Description
Medan was once an areafull of forest, but it can’t be proud of them anymore.The mayor in that area  has  put  a  huge  effort  inpreventingtrees from  being  unnecessarily  cut  down.  A  local rich newcomer plansto  buyarelatively  large  piece  of square-shaped landand  he  wants  to  build  a house on it. He also wants to make the house as large as possible and square-shaped.

The land in Medan is divided into little 1x1 squares. One tree occupies exactly one square. Since the land is  big, it's  very  hard to  find  the largest  square  with  its  sides  parallel  to  the sides  of the land  and  with  no  trees  on  it.  For  a  given  map  of  the  land  that  describes  the  position  of  all  the trees,  you  must  find  the  square  with  the  largest  sides  and  with  no  trees  onit.  The  length  of  the square's side is the number of 1x1 squares along its side

### Input
The  first line contains one integer **N**(1 <= **N** <=  80), where **N**x**N** is  the  size  of  the  grid. The second line contains one integer **M**(1 <= **M** <= 500), where **M** is the number of trees in Medan. The next **M** lines contain two numbers that represent the coordinate of a tree.

### Output
Output the length of the side of the largest square with no trees in it.

### Sample Input
5
3
4 4
4 2
2 2

### Sample Output
3

### Explanation
- are land, x are trees

Input plot looks like this: 
- - - - -
- x - - -
- - - - - 
- x - x -
- - - - -

The rich new comer can buy a square-shaped land at index (1,3) with size 3
- - x x x 
- x x x x
- - x x x 
- x - x -
- - - - -