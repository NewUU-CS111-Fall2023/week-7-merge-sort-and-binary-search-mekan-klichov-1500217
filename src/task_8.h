/*
 * Author: Mekan Klichov
 * Date: 29.11.2023
 * Name: Mekan Klichov
 */

//The time complexity is O(n^2), where n is the value of n in the input.

#include <iostream>
#include <vector>

using namespace std;

vector<int> findMissingNumber(int n, vector<int>& nums) {
    vector<int> result;

    for (int i = 0; i <= n; ++i) {
        if (find(nums.begin(), nums.end(), i) == nums.end()) {
            result.push_back(i);
        }
    }

    return result;
}