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