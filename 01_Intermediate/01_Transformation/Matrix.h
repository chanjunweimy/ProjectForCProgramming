// Matrix.h

#include <string>
#include <cstdlib>
using namespace std;

#define MAX_SIZE 100

class Matrix {
    static const string OP_ROTATE;
    static const string OP_REFLECT;
    static const string DIR_X;
    static const string DIR_Y;

    private: 
        void rotate(int degree, int input[MAX_SIZE][MAX_SIZE]);
        void reflectX(int input[MAX_SIZE][MAX_SIZE]);
        void reflectY(int input[MAX_SIZE][MAX_SIZE]);
        
        void copyTempToInput(int input[MAX_SIZE][MAX_SIZE]);
        
        int size;
        int temp[MAX_SIZE][MAX_SIZE];
        
    public:
        Matrix(int size);
        void operate(string operation, string type, int input[MAX_SIZE][MAX_SIZE]);
};
