### Problem Taken from CS1020E AY2015/16 Lab0 HelloWorld

### Problem Description
There are various techniques of parsing input. In this problem, you will encounter three basic techniques of parsing input, i.e.
    1. Given an integer **N**, you should read **N** lines, each line contains some information.
    2. Read until special characters (e.g. read until -1).
    3. Read until end of file.
This problem is about simple arithmetic, given a binary operator (AND, OR) 
and two bits. 
Output the result of the operations.

### Input
The first line contains the type of reading input (1, 2, or 3).

Type 1: The second line contains an integer **N**, 
indicating the number of operations. The next
N lines contain one string, denoting the operator and two bits 
denoting the operands.

Type 2: There are several lines containing the information of 
the given operations. Each line contains one string, 
denoting the operator and two bits denoting the operands.
**Read until special character ‘0’**.

Type 3: There are several lines containing the information of the 
given operations. Each line contains one string, denoting the operator 
and two bits denoting the operands. Read until end of file.
There are at most 100 operations to be processed.

### Output
Output the result of the operations.

### Sample Input 1
1
2
AND 1 0 
OR 0 1
### Sample Output 1
0
1

### Sample Input 2
2
AND 1 1 
OR 1 0 
AND 1 0 
0
### Sample Output 2
1
1 
0
### Sample Input 3
3
AND 1 1 
OR 1 0
### Sample Output 3
1 
1

### Explanation
In **sample input 1**, the input type is 1 and N equals to 2. 
So there are 2 operations that we need to process:

1st operation is “AND 1 0”, the binary operator here is “AND” 
and the two bits are 1 and 0. The result of this operation is 1 AND 0 = 0.

2nd operation is “OR 0 1”, the binary operation here is “OR” 
and the two bits are 0 and 1. The result of this operation is 0 OR 1 = 1.

In **sample input 2**, the input type is 2. It means we need to 
read until a special character ‘0’. 
We have 3 operations to be processed in sample input 2.

1st operation: “AND 1 1”, the binary operation here is “AND” 
and the two bits are 1 and 1. The result of this operation is 1 AND 1 = 1.

2nd operation: “OR 1 0”, the binary operation here is “OR” 
and the two bits are 1 and 0. The result of this operation is 1 OR 0 = 1.

3nd operation: “AND 1 0”, the binary operation here is “AND” 
and the two bits are 1 and 0. The result of this operation is 1 AND 0 = 0.

In **sample input 3**, the input type is 3. It means we need to 
read until end of file. We have 2 operations to be processed in sample input 3.