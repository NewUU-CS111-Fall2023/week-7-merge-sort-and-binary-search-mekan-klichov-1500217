/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"
#include "task_8.h"
#include "task_9.h"
#include "task_10.h"

int main() {
    std::cout << "Task 1" << std::endl;
    // call for task 1
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = sumAfterOperations(n, arr);
        cout << result << endl;
    }
    std::cout << "Task 2" << std::endl;
    // call for task 2
    int n;
    cin >> n;

    std::cout << beautifulness(n) << endl;
    std::cout << "Task 3" << std::endl;
    // call for task 3
    int T;
    cin >> T;

    mergeArray(T);
    std::cout << "Task 4" << std::endl;
    // call for task 4
    int N, k;
    cin >> N >> k;

    vector<vector<int>> matrix(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int result = kthSmallest(matrix, k);
    cout << result << endl;
    std::cout << "Task 5" << std::endl;
    // call for task 5
    int nm;
    cin >> nm;

    vector<int> nums(nm);
    for (int i = 0; i < nm; ++i) {
        cin >> nums[i];
    }

    int K;
    cin >> K;

    vector<int> Result = topKFrequent(nums, K);

    for (int num : Result) {
        cout << num << " ";
    }
    std::cout << "Task 6" << std::endl;
    int Num;
    cin >> Num;

    vector<int> Nums(Num);
    for (int i = 0; i < Num; ++i) {
        cin >> Nums[i];
    }

    int target;
    cin >> target;

    pair<int, int> ResultIP = searchInsertPosition(Nums, target);

    cout << ResultIP.first << " " << ResultIP.second << endl;
    std::cout << "Task 7" << std::endl;
    int x_num, n_num;
    cin >> x_num >> n_num;

    int this_result = recursivePow(x_num, n_num);

    cout << this_result << endl;
    std::cout << "Task 8" << std::endl;
    int this_n;
    cin >> this_n;

    vector<int> numS(this_n);
    for (int i = 0; i < this_n; ++i) {
        cin >> nums[i];
    }

    vector<int> theResult = findMissingNumber(this_n, nums);

    for (int i : theResult) {
        cout << i << " ";
    }
    std::cout << "Task 9" << std::endl;
    int theN, theK;
    cin >> theN >> theK;

    vector<int> arr(theN);
    for (int i = 0; i < theN; ++i) {
        cin >> arr[i];
    }

    int the_result = findKthPositive(theN, theK, arr);

    cout << the_result;
    std::cout << "Task 10" << std::endl;
    int The_N, The_K;
    cin >> The_N >> The_K;

    int THE_result = kthFactor(The_N, The_K);

    cout << THE_result;

    return 0;
}
