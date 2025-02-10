#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> arr = { 5, 10, 3, 7, 8 };
    int sum = 0;
    for (int i = arr.size() - 1; i >= 0; i--) {
        sum += arr[i];
        arr[i] = sum;
    }
    for (auto& item : arr) cout << item << " ";
    return 0;
}

// 3. You are a data analyst for a logistics company that tracks the fuel consumption of delivery vehicles throughout their routes. The company wants to optimize fuel usage by analyzing the remaining fuel capacity after each delivery point.
// The goal is to compute the postfix sum of the fuel consumption array, where each element in the array represents the fuel consumed at a specific delivery point. The postfix sum at any given point is the total fuel consumption from that point to the end of the route.
// Input
// An array Fuel[] of m integers representing the fuel consumed at each delivery point.
// Output
// An array PostfixSum[] of m integers where PostfixSum[i] is the total fuel consumption from delivery point i to the end of the route.

// Example
// Input:
// Fuel[] = [5, 10, 3, 7, 8]
// Output:
// PostfixSum[] = [33, 28, 18, 15, 8]
// Explanation: The postfix sums are calculated as follows:
// PostfixSum[0] = 5 + 10 + 3 + 7 + 8 = 33
// PostfixSum[1] = 10 + 3 + 7 + 8 = 28
// PostfixSum[2] = 3 + 7 + 8 = 18
// PostfixSum[3] = 7 + 8 = 15
// PostfixSum[4] = 8