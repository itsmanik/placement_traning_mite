#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> arr = { 30, 45, 25, 60, 20 };
    int count = 0;
    for (int i = 0; i < arr.size(); i++) 
        for (int j = i + 1; j < arr.size(); j++) 
            if (arr[i] > arr[j]) count++;
    cout << count;
    return 0;
}

// You are working for an e-commerce company that deals with a large volume of customer orders. The company wants to optimize its warehouse operations by analyzing the efficiency of order processing.
// Objective: Count the number of inversion pairs in the order processing times to identify potential inefficiencies. An inversion pair in this context is defined as a situation where a later order (in terms of processing sequence) took less time to process than an earlier order. By identifying these inversions, you can pinpoint areas where the warehouse team may need to improve their workflow or processes.
// Input: An array P[] of n integers representing the processing times of orders, in the order they were processed.
// Output: The count of inversion pairs in the array.
// Input:
// P[] = [30, 45, 25, 60, 20]
// Output:
// The inversion count is 6
// Explanation:
// There are 6 inversion pairs in the array:
// (45, 25) where 45 > 25 and 2 < 3
// (45, 20) where 45 > 20 and 2 < 5
// (30, 25) where 30 > 25 and 1 < 3
// (30, 20) where 30 > 20 and 1 < 5
// (60, 20) where 60 > 20 and 4 < 5
// (25, 20) where 25 > 20 and 3 < 5

// Example 2:Input:  
// P[] = [1, 9, 6, 4, 5]
// Output: 
// The inversion count is 5
// Explanation: 
// There are 5 inversions in the array:
// (9, 6) where 9 > 6 and 2 < 3
// (9, 4) where 9 > 4 and 2 < 4
// (9, 5) where 9 > 5 and 2 < 5
// (6, 4) where 6 > 4 and 3 < 4
// (6, 5) where 6 > 5 and 3 < 5
