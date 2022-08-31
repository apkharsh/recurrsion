// write the code for fibonacci series using recurrsion
// fibonacci series is 0 1 1 2 3 5 8 13 21 ...

#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==0 || n==1) return n;
    return fibo(n-1)+fibo(n-2);
}

int main(){
    cout << fibo(7) << endl;
},