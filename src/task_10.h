/*
 * Author: Mekan Klichov
 * Date: 29.11.2023
 * Name: Mekan Klichov
 */

//The time complexity is O(n), where n is the given integer.

#include <iostream>

using namespace std;

int kthFactor(int n, int k) {
    int count = 0;

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            ++count;
            if (count == k) {
                return i;
            }
        }
    }

    return -1;
}