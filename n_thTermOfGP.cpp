#include <bits/stdc++.h>
using namespace std;

int power(int num, int pow){
    if(pow == 0) return 1;
    return num * power(num, pow - 1);
}

int NthTermOfGP(int N, int A, int R){
    return A * power(R, N - 1);
}

int main(){
    /*Write your code here*/
    int N, A, R;
    cin >> N >> A >> R;
    cout << NthTermOfGP(N, A, R) << endl;
    return 0;
}