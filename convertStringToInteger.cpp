#include <bits/stdc++.h>
using namespace std;
// ascii value 48-57

string solve(string &s){
    int n = s.length();
    if(n==0) return s;
    if(s[n-1]>=48 && s[n-1]<=57){
        char last = s[n-1];
        s.pop_back();
        return solve(s) + last;
    }
    else{
        s.pop_back();
        return solve(s);
    }
}
int main(){
    /*Write your code here*/
    string s; cin >> s;
    cout << solve(s) << endl;
}