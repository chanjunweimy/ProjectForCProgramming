/* 
* Find median of an unsorted array 
* N: number of input integers
* Output: median of array
* Note: using default comparison (<)
*/

#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

using namespace std;

int main() {

	int N;
	cin >> N;
	
	int arr[N];
	
	vector<int> vec;	
	
	int i;
	for (i=0; i<N; ++i) {
		//cin >> arr[i];
		int input; 
		cin >> input;
		vec.push_back(input);
	}
	
	sort(vec.begin(), vec.end());
	
	int median = vec.size()/2;
	
	cout << vec.at(median);

	return 0;
}