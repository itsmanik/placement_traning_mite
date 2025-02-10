#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> arr = { 10, 20, 15, 30, 25 };
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        arr[i] = sum;
    }
    for (auto& item : arr) cout << item << " ";
    return 0;
}

// 2. You work as a software engineer for a company that manages online retail stores. The company wants to implement a feature that provides real-time insights into daily sales trends. One of the key metrics is the cumulative sales amount up to a specific hour of the day.

// The goal is to compute the prefix sum of the sales array, where each element in the array represents the sales amount at a specific hour. The prefix sum at any given hour is the total sales amount from the start of the day up to that hour.
// Input
// An array Sales[] of n integers representing the sales amount at each hour of the day.
// Output
// An array PrefixSum[] of n integers where PrefixSum[i] is the cumulative sales amount from the start of the day up to hour i.

// Example
// Input:
// Sales[] = [10, 20, 15, 30, 25]
// Output:
// PrefixSum[] = [10, 30, 45, 75, 100]
// Explanation: The prefix sums are calculated as follows:
// PrefixSum[0] = 10
// PrefixSum[1] = 10 + 20 = 30
// PrefixSum[2] = 10 + 20 + 15 = 45
// PrefixSum[3] = 10 + 20 + 15 + 30 = 75
// PrefixSum[4] = 10 + 20 + 15 + 30 + 25 = 100