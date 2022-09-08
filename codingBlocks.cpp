#include <bits/stdc++.h>
using namespace std;

string solve(string &s, int count){
    int n = s.length();
    if(n == 0) return s;
    if(s[n-1]==s[n-2]){
        count++;
        s.pop_back();
        return solve(s, count);
    }
    else{
        char last = s[n-1];
        s.pop_back();
        return solve(s,count) + to_string(count)  + last  ;
        count = 0;
    }
}

int main(){
    /*Write your code here*/
    string s; cin >> s;
    cout << solve(s, 1) << endl;
    return 0;
}