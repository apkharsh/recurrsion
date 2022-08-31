#include <bits/stdc++.h>
using namespace std;

int summ(int arr[], int n){
    if(n==0) return 0;
    return arr[n-1]+summ(arr, n-1);
}

int main(){
    /*Write your code here*/
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << summ(arr, n) << endl;
}