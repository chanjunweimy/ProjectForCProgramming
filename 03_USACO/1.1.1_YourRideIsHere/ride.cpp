/*
ID: chanjun1
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MODULO = 47;

int hashCharacter(char inputChar) {
    if (inputChar >= 'A' && inputChar <= 'Z') {
        return inputChar - 'A' + 1;
    } else if (inputChar >= 'a' && inputChar <= 'z') {
        return inputChar - 'a' + 1;
    } else {
    }

    return 0;
}

int calculateMod(string inputString) {
    // O(n), faster solution would be O(logn)
    int ans = 1;
    for (int i = 0; i < inputString.length(); i++) {
        int curHash = hashCharacter(inputString[i]);
        ans = (ans * curHash) % MODULO;
    }
    return ans;
}

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    fin >> a >> b;

    int codeA = calculateMod(a);
    int codeB = calculateMod(b);

    if (codeA == codeB) {
        fout << "GO" << endl;
    } else {
        fout << "STAY" << endl;
    }
    return 0;
}
