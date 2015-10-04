#include<iostream>

/*
 * Prints out the first n terms in the Fibonacci Sequence
 * Iterative Version
 *    
 * Example:
 * Input: 5
 * Output: 1 1 2 3 5
 * 
 */

using namespace std;

int main()
{
    int n, i;
    int firstNum = 1, secondNum = 1;
    int nextNum;

    cout << "Fibonacci Sequence... Iterative Version" << endl << "Prints the first n terms in the Fibonacci Sequence." << endl << "Enter n: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            nextNum = 1;
        }
        else 
        {
            nextNum = firstNum + secondNum;
            firstNum = secondNum;
            secondNum = nextNum;
        }
       
        cout << nextNum << " " ;
    }
    cout << endl;

    return 0;
}
