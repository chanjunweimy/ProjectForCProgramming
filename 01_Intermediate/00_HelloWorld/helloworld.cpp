#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void PerformTypeOne();
void PerformTypeTwo();
void PerformTypeThree();
void ProcessLine(string expression);

int main()
{
    int inputType;
    
    cin >> inputType;
    
    switch (inputType)
    {
        case 1:
            PerformTypeOne();
            break;
        case 2:
            PerformTypeTwo();
            break;
        case 3:
            PerformTypeThree();
            break;
        default:
            break;
    }
    
    return 0;
}

void PerformTypeOne()
{
    int numOperations;
    cin >> numOperations;
    
    string expression;
    for (int i=0; i<numOperations; i++) 
    {
        getline(cin, expression);
        ProcessLine(expression);
    } 
}

void PerformTypeTwo()
{
    string expression;
    cin.ignore();
    while(true)
    {
        getline(cin, expression);
        if (expression == "0")
        {
            return;
        }
        else {
           ProcessLine(expression);
        }
    }
}

void PerformTypeThree()
{
    string expression;
    cin.ignore();
    while(getline(cin, expression))
    {
        ProcessLine(expression);
    }
}

void ProcessLine(string expression)
{
    string arr[3]; int i = 0;
    istringstream is (expression);
    while (is.good() && i < 3) {
        is >> arr[i];
        ++i;
    }

    int result;
    
    if (arr[0] == "AND")
    {
        result = atoi(arr[1].c_str()) & atoi(arr[2].c_str());    
    }
    else 
    {
        result = atoi(arr[1].c_str()) | atoi(arr[2].c_str());    
    }
    cout << result << endl;

}