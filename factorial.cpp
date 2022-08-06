#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==1) return 1;
    return factorial(n-1)*n;
}

// how it works
// factorial(5) return 24*5
// factorial(4) return 6*4
// factorial(3) return 2*3
// factorial(2) return 1*2
// factorial(1) return 1


int main(){
    /*Write your code here*/
    int n; cin >> n;
    cout << factorial(n) << endl;
    return 0;
}