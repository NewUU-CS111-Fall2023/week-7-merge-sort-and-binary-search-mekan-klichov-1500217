/*
 * Author: Mekan Klichov
 * Date: 29.11.2023
 * Name: Mekan Klichov
 */

//The overall time complexity of the program is O(N + M + (N + M) log(N + M)).

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mergeArray(int T) {
    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> A(N);
        vector<int> B(M);

        // Input first sorted array A
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Input second sorted array B
        for (int i = 0; i < M; i++) {
            cin >> B[i];
        }

        // Merge arrays A and B into one sorted array in non-increasing order
        vector<int> result(N + M);
        merge(A.begin(), A.end(), B.begin(), B.end(), result.begin(), greater<int>());

        // Output the merged array
        for (int i = 0; i < N + M; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}
