// write code for a function power(x,n) which evaluates x^n.
#include <bits/stdc++.h>
using namespace std;
int power(int n,int x){
    if(n==0) return 1;
    return x*power(n-1,x);
}

int main(){
    int n,x;
    cin >> n >> x;
    cout << power(n,x) << endl;
}