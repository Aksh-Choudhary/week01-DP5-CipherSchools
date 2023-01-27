#include <bits/stdc++.h>

using namespace std;

void generateParenthesis(string &strofar, vector<string> &result, int open, int close){
    if (open <0 || close < 0 || open > close) {
        return;
    }
    if (open = 0 && close == 0) { 
        result.push_back(strSoFar);
        return;
    }
    strSofar.push_back("(");
    generateParenthesis (strSofar, result, open - 1, close); I
    strSofar.pop_back();
    strSofar.push_back(')'); 
    generateParenthesis (strSofar, result, open, close - 1);
    strSofar.pop_back();
}

vector<string> generateParenthesis (const int n) {
    
    vector<string> result;
    int open n, close = n;
     string strSoFar = ""; 
     generateParenthesis (strSoFar, result, open, close);

    return result;
}

int main(){
    return 0;
} 
