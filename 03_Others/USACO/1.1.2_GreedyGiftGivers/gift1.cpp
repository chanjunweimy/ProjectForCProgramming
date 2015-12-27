/*
ID: chanjun1
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;
const int MAX_SIZE_GROUP = 15;

struct pplMoney {
    string name;
    int initialMoney;
    int finalMoney;
};

int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int numOfPeople;
    map <string, int> nameIndexMap;
    pplMoney peoples[MAX_SIZE_GROUP];

    fin >> numOfPeople;
    for (int i = 0; i < numOfPeople; i++) {
        string name;
        fin >> name;
        peoples[i].name = name;
        peoples[i].initialMoney = 0;
        peoples[i].finalMoney = 0;
        nameIndexMap[name] = i;
    }

    for (int i = 0; i < numOfPeople; i++) {
        string giverName;
        int initialAmount, numOfPeople;
        fin >> giverName;
        fin >> initialAmount >> numOfPeople;
        int giverIndex = nameIndexMap[giverName];
        peoples[giverIndex].initialMoney = initialAmount;

        if (numOfPeople == 0) {
            peoples[giverIndex].finalMoney += initialAmount;
        } else if (numOfPeople > 0) {
            int moneyReceivedPerPerson = initialAmount / numOfPeople;
            int totalMoneyGiven = moneyReceivedPerPerson * numOfPeople;
            int moneyLeft = initialAmount - totalMoneyGiven;
            peoples[giverIndex].finalMoney += moneyLeft;

            for (int i = 0; i < numOfPeople; i++) {
                string receiverName;
                fin >> receiverName;
                int receiverIndex = nameIndexMap[receiverName];
                peoples[receiverIndex].finalMoney += moneyReceivedPerPerson;
            }
        }
    }

    for (int i = 0; i < numOfPeople; i++) {
        fout << peoples[i].name << " "
             << peoples[i].finalMoney - peoples[i].initialMoney << "\n";
    }
    return 0;
}
