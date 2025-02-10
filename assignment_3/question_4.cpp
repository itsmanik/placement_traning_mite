#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main() {
    vector<int> arr = { 9, 333, 222, 333, 4444, 666 };
    set<int> set;
    for (auto& num : arr) {
        while (num != 0) {
            int rem = num % 10;
            set.insert(rem);
            num /= 10;
        }
    }
    for(auto& item : set) cout << item << " ";
    return 0;
}

// 4. You work for a mobile app development company that specializes in creating educational apps for kids. One of your tasks is to develop a game that helps children learn and recognize different digits.
// The game includes a feature where a list of numbers is provided, and the child needs to identify all the distinct digits present in that list. The goal is to find all unique digits from the given array of integers.

// Input
// An array N[] of k integers.
// Output
// A sorted list of distinct digits present in the array.

// Example
// Input:
// N[] = {111, 222, 333, 4444, 666}
// Output:
// [1, 2, 3, 4, 6]