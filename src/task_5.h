/*
 * Author: Mekan Klichov
 * Date: 29.11.2023
 * Name: Mekan Klichov
 */

//The time complexity is O(n log n), where n is the size of the array.

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> frequency;
    for (int num : nums) {
        frequency[num]++;
    }

    vector<pair<int, int>> frequencyList;
    for (auto& entry : frequency) {
        frequencyList.push_back(entry);
    }

    sort(frequencyList.begin(), frequencyList.end(), [](const auto& a, const auto& b) {
        return a.second > b.second || (a.second == b.second && a.first < b.first);
    });

    vector<int> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(frequencyList[i].first);
    }

    return result;
}