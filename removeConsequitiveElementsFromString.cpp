#include <bits/stdc++.h>
using namespace std;

string solve(string &s){
    int n = s.length();
    if(n<2) return s;
    if(s[n-1]==s[n-2]) {
        s.pop_back();
        return solve(s);
    }
    else {
        char last = s[n-1];
        s.pop_back();
        // return solve(s.substr(0, n-1)) + last;
        return solve(s) + last;
    }
}

int main(){
    /*Write your code here*/
    string s = "haabc";
    // int sizee = s.size();
    // cout << s.substr(2,sizee) << endl;
    cout << solve(s) << endl;

}

