/**
 * Author: Chan Jun Wei
 */

#include <iostream>
#include <vector>

using namespace std;

/**
 * O(N^2) method
 */
void bruteforce(vector <int> consecutiveSum, long long &numOfSubsequences) {
    for (int i = (int) consecutiveSum.size() - 1; i >= 0; i--) {
        if (consecutiveSum[i] > 0) {
            numOfSubsequences++;
        }
        for (int j = 0; j < i; j++) {
            if (consecutiveSum[i] - consecutiveSum[j] > 0) {
                numOfSubsequences++;
            }
        }
    }
}

/**
 * O(NlogN) method
 */
vector <int> mergeSort(vector <int> originalArray, long long &numOfSubsequences) {
    //base case
    if (originalArray.empty()) {
        return originalArray;
    } else if (originalArray.size() == 1) {
        if (originalArray[0] > 0) {
            numOfSubsequences++;
        }
        return originalArray;
    }

    //split
    int splitPoint = originalArray.size() / 2;

    vector <int> firstHalf;
    vector <int> secondHalf;

    for (int i = 0; i < splitPoint; i++) {
        firstHalf.push_back(originalArray[i]);
    }

    for (int i = splitPoint; i < (int) originalArray.size(); i++) {
        secondHalf.push_back(originalArray[i]);
    }

    firstHalf = mergeSort(firstHalf, numOfSubsequences);
    secondHalf = mergeSort(secondHalf, numOfSubsequences);

    //merge
    int firstHalfIndex = 0;
    int secondHalfIndex = 0;
    for (int i = 0; i < (int) originalArray.size(); i++) {
        if (firstHalfIndex < (int) firstHalf.size() &&
            secondHalfIndex < (int) secondHalf.size() &&
            firstHalf[firstHalfIndex] < secondHalf[secondHalfIndex]) {

            originalArray[i] = firstHalf[firstHalfIndex];
            firstHalfIndex++;
        } else if (firstHalfIndex < (int) firstHalf.size() &&
                   secondHalfIndex < (int) secondHalf.size() &&
                   firstHalf[firstHalfIndex] >= secondHalf[secondHalfIndex]) {
            originalArray[i] = secondHalf[secondHalfIndex];
            numOfSubsequences += firstHalfIndex;
            secondHalfIndex++;
        } else if (firstHalfIndex >= (int) firstHalf.size() &&
                   secondHalfIndex < (int) secondHalf.size()) {
            originalArray[i] = secondHalf[secondHalfIndex];
            numOfSubsequences += firstHalfIndex;
            secondHalfIndex++;
        } else if (firstHalfIndex < (int) firstHalf.size() &&
                   secondHalfIndex >= (int) secondHalf.size()) {
            originalArray[i] = firstHalf[firstHalfIndex];
            firstHalfIndex++;
        }
    }
    return originalArray;
}

int main()
{
    vector <int> inputArray;
    vector <int> consecutiveSum;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int curElement;
        cin >> curElement;
        inputArray.push_back(curElement);
        if (i == 0) {
            consecutiveSum.push_back(curElement);
        } else {
            int sum = consecutiveSum[i - 1] + curElement;
            consecutiveSum.push_back(sum);
        }
    }

    long long numOfSubsequences = 0;

    //bruteforce(consecutiveSum, numOfSubsequences);
    mergeSort(consecutiveSum, numOfSubsequences);

    cout << numOfSubsequences << endl;

    return 0;
}
