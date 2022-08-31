#include <bits/stdc++.h>
using namespace std;


// vector<int> hash = {0,1,2,3,4,5,6,7,8,9};
// 2048
void print(int N){
    string S[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(N==0) return;
    print(N/10);
    cout << S[N%10] << " ";
}
// recurrsion
// 2 0 4 8
// 2 0 4
// 2 0 
// 2
// 0

// print s[2%10] = "two"
// return
// print s[20%10] = "zero"
// return
// print s[204%10] = "four"
// return
// print s[2048%10] = "eight"

int main(){
    /*Write your code here*/
    int n; cin >> n;
    print(n);
    return 0;
}