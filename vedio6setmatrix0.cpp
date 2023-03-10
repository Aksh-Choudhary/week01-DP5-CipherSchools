#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        
    int row = matrix.size();
    int col = matrix[0].size();
            
    bool row0 = false, col0 = false;
            
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(matrix[i][j] == 0){
                if(i == 0) row0 = true;
                if(j == 0) col0 =true;
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }
   for(int i = 1; i < row; i++){
        for(int j = 1; j < col; j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
    }
            
            
    if(row0){
        for(int i = 0; i < col; i++)
            matrix[0][i] = 0;
        }
            
    if(col0){
        for(int i = 0; i < row; i++)
            matrix[i][0] = 0;
    } 
}

int main()
{
    cout<<"Hello World";

    return 0;
}
