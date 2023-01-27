#include <iostream>
#include <bits?stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
int startRow = 0, startColumn = 0;
int endRow = matrix.size() - 1, endColumn = matrix[0].size() - 1;
vector<int> ans;
while (startRow <= endRow && startColumn <= endColumn) {
for(int i = startColumn; i <= endColumn; i++) {
ans.push_back(matrix[startRow][i]);
}
startRow++;
for(int i = startRow; i <= endRow; i++) {
ans.push_back(matrix[i][endColumn]);
}
endColumn--;
if (startRow > endRow || startColumn > endColumn) {
break;
}
for(int i = endColumn; i >= startColumn; i--) {
ans.push_back(matrix[endRow][i]);
}
endRow--;
for(int i = endRow; i >= startRow; i--) {
ans.push_back(matrix[i][startColumn]);
}
startColumn++;
}
return ans;
}

int main()
{
    cout<<"Hello World";
    spiralOrder(v);

    return 0;
}
