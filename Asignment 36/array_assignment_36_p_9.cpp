//9. C++ program to find the integers which come an odd number of times in an array using C++ STL.
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> findOddOccurringIntegers(vector<int>& arr) {
    unordered_map<int, int> freqMap;
    for (int i = 0; i < arr.size(); i++) {
        freqMap[arr[i]]++;
    }

    vector<int> result;
    for (auto it = freqMap.begin(); it != freqMap.end(); it++) {
        if (it->second % 2 != 0) {
            result.push_back(it->first);
        }
    }
    return result;
}

int main() {
    vector<int> arr = { 1, 2, 3, 2, 1, 4, 4, 5, 5 };
    vector<int> result = findOddOccurringIntegers(arr);
    cout << "Odd occurring integers: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
