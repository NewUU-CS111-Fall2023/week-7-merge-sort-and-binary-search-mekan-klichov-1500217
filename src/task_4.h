/*
 * Author: Mekan Klichov
 * Date: 29.11.2023
 * Name: Mekan Klichov
 */

//The time complexity is O(N^2 * log(N)).

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();
    vector<int> flattened;

    for (int i = 0; i < n; ++i) {
        flattened.insert(flattened.end(), matrix[i].begin(), matrix[i].end());
    }

    sort(flattened.begin(), flattened.end());

    return flattened[k - 1];
}