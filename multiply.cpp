#include <bits/stdc++.h>
using namespace std;


int multiply(int a, int b){
    if(b==0) return 0;
    if(b==1) return a;
    return a+multiply(a,b-1);
}
int main(){
    /*Write your code here*/
    cout << multiply(2,3);
    return 0;
}