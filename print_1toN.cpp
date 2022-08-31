#include <bits/stdc++.h>
using namespace std;

// Code to print 1 to N
void print(int n){
    if(n==0) return;
    print(n-1);
    cout << n << " ";
}
// print(n)
// print(5)
// print(4)
// print(3)
// print(2)
// print(1)
// print(0) return;


// Code to print N to 1 using recursion

void print2(int N){
    if(N==0) return;
    cout << N << " ";
    print2(N-1);
}

int main(){
    /*Write your code here*/
    int n; cin >> n;
    print2(n);
    // cout << endl;
    // print2(n);

    return 0;
}