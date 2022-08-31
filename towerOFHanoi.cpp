// write the code solve tower of hanoi
#include <bits/stdc++.h>
using namespace std;
// Minimum steps to reach the destination is 2^(n)-1
void solve(int n, char source, char helper, char destination){
    if (n == 0) return;
    solve(n - 1, source, destination, helper);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    solve(n - 1, helper, source, destination);
}

int main(){
    int n; cin >> n;
    solve(n, 'A', 'B', 'C');
}