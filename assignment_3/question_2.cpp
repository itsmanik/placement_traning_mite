#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> arr = { 10, 20, 15, 30, 25 };
    vector<int> prefixSum;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        prefixSum.push_back(sum);
    }
    for (auto& item : prefixSum) cout << item << " ";
    return 0;
}