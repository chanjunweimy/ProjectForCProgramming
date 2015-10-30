# Positive Sum Intervals (PSI) 
* This is a past CS1020E PE Question.
* Input, output and skeleton are taken from NUS CS1020E course.

### Index
* [Decription](readme.md#description)

### Description
* A positive sum interval (PSI) of an array is a consecutive subsequence of the array such 
that the sum of all elements in the subsequence is positive. 
* For example, {2, -2, 3, -2} is a 
PSI of the array {1, 2, -2, 3, -2, -2, 3}, but {2, -2, 3, -2, -2} is not.  
* PSI is very useful, but you are not going to use it here. 
* Instead, in this lab, you are to count 
the number of PSIs of a given integer array. 

### Input
* The first line contains an integer N, which is the number of elements in the array. 
* The second line contains N integers. 
* All integers are within [-10000, 10000].  

### Output
* Output the number of PSIs of the given integer array. 

### Sample Input 1 
* 4
* 1 -2 3 -2 

### Sample Output 1 
* 5

### Explanation 1
* {1}, {1, -2, 3}, {-2, 3}, {3}, {3, -2} are the PSIs. 

### Sample Input 2
* 7 
* 1 2 -2 3 -2 -2 3 

### Sample Output 2
* 16 

### Solution
* O(N^2) : smarter brute force algorithm. 
* O(NlogN) : modified merged sort algorithm.
