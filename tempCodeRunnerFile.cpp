#include <bits/stdc++.h>
using namespace std;

void print(int n){
    if(n == 0) return;
    if(n%2) cout << n << endl;
    print(n-1);
    if(n%2==0) cout << n << endl;
}

int main(){
    /*Write your code here*/
    print(5);
}