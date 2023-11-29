/*
 * Author: Mekan Klichov
 * Date: 29.11.2023
 * Name: Mekan Klichov
 */

//The overall time complexity is O(N log N), where N is the size of the array, due to the sorting operation for finding the median.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMedian(vector<int>& arr, int start, int end) {
    vector<int> subarray(arr.begin() + start, arr.begin() + end + 1);
    sort(subarray.begin(), subarray.end());
    return subarray[subarray.size() / 2];
}

int sumAfterOperations(int n, vector<int>& arr) {
    int sum = 0;

    while (n > 2) {
        int minMedian = min(findMedian(arr, 0, n - 1), findMedian(arr, 1, n - 1));
        auto it = find(arr.begin(), arr.end(), minMedian);
        arr.erase(it);

        n--;
    }

    for (int i : arr) {
        sum += i;
    }

    return sum;
}