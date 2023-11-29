/*
 * Author: Mekan Klichov
 * Date: 29.11.2023
 * Name: Mekan Klichov
 */

// The time complexity of this solution is O(n), where n is the value of n in recursivePow.

#include <iostream>

using namespace std;

int recursivePow(int x, int n) {
    if (n == 0) {
        return 1;
    }

    return x * recursivePow(x, n - 1);
}