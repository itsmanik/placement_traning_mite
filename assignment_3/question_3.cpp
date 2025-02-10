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