/*
 * Author: Mekan Klichov
 * Date: 29.11.2023
 * Name: Mekan Klichov
 */

//The time complexity of the sorting operation is O(n log n), where n is the size of the permutation.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long beautifulness(int n) {

    vector<int> Y(n);
    for (int i = 0; i < n; i++) {
        cin >> Y[i];
    }

    sort(Y.begin(), Y.end());

    long long beautifulness = 0;
    for (int i = 0; i < n; i++) {
        beautifulness += abs(Y[i] - (i + 1));
    }

    return beautifulness;
}
