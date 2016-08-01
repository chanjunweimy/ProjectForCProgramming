/* 
* Hacker rank balanced parentheses
* Examples of some correctly balanced strings are: "{}()", "[{()}]", "({()})" 
* Examples of some unbalanced strings are: "{}(", "({)}", "[[", "}{" etc.
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool balanced(string input) {
	string openBraces = "({[";
	string closeBraces = ")}]";
	
	stack<char> p;
	
	for (auto i : input) {
		auto pos = string::npos;
		
		if (openBraces.find(i) != string::npos) {
			p.push(i);
		} else if ( (pos=closeBraces.find(i)) != string::npos ) {
			if (p.empty()) return false;
			if (p.top() == openBraces[pos]) p.pop();
			else return false;
		}
	}
	
	if (!p.empty())	return false;
	return true;

}


int main() {
	string input ;
	getline(cin, input);
	cout << (balanced(input) ? "balanced" : "not balanced");
	cout << "\n";
}
