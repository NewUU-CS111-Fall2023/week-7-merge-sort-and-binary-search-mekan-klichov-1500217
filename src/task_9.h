/*
 * Author: Mekan Klichov
 * Date: 29.11.2023
 * Name: Mekan Klichov
 */

//The time complexity is O(n + k), where n is the length of the array arr.

#include <iostream>
#include <vector>

using namespace std;

int findKthPositive(int n, int k, vector<int>& arr) {
    vector<int> missingNumbers;

    int current = 1;
    int i = 0;

    while (missingNumbers.size() < k) {
        if (i < arr.size() && arr[i] == current) {
            ++i;
        } else {
            missingNumbers.push_back(current);
        }

        ++current;
    }

    return missingNumbers.back();
}