#include <bits/stdc++.h>
using namespace std;
// ascii value 48-57
// time complexity O(n)
int solveRecurr(string &s, int ans)
{
    int n = s.length();
    if (n == 0) return ans;
    if (s[n - 1] >= 48 && s[n - 1] <= 57){
        char last = s[n - 1];
        s.pop_back();
        solveRecurr(s, ans) + last;
        ans = (ans * 10 + last - '0');
        // cout << last << endl;
        // cout << ans << endl;
    }
    else{
        s.pop_back();
        solveRecurr(s, ans);
    }
    return ans;
}
int solve(string s)
{
    bool negative = false;
    if(s[0]=='-') negative = true;
    int temp = solveRecurr(s,0);
    if(negative) return -temp;
    return temp;
}
int main()
{
    /*Write your code here*/
    string s; cin >> s;
    cout << solve(s) << endl;
}


// incomplete hai abhi