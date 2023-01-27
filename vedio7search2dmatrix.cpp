#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
vector<int> findAns(vector<vector<int> > arr, int target)
{
    int row = 0;
    int col = arr[row].size() - 1;
    while (row < arr.size() && col >= 0) {
        if (arr[row][col] == target) {
            return { row, col };
        }
 
        // Target lies in further row
        if (arr[row][col] < target) {
            row++;
        }
        // Target lies in previous column
        else {
            col--;
        }
    }
    return { -1, -1 };
}
 
// Driver Code
int main()
{
 
    // Binary search in sorted matrix
    vector<vector<int> > arr = { { 1, 2, 3, 4 },
                                 { 5, 6, 7, 8 },
                                 { 9, 10, 11, 12 } };
 
    vector<int> ans = findAns(arr, 12);
 
    cout << "Element found at index: [";
    for (int i = 0; i < ans.size(); i++) {
        if (i == ans.size() - 1)
            cout << ans[i];
        else
            cout << ans[i] << ", ";
    }
    cout << "]";
}