// check if array is sorted using recurrsion
#include <bits/stdc++.h>
using namespace std;

bool check(int arr[], int n){
    if(n<=1) return true;
    // if(arr[n-1]<arr[n-2]) return false;
    return !(arr[n-1]<arr[n-2])&&check(arr, n-1);
}
int main(){
    /*Write your code here*/
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    if(check(arr, n)) cout << "Sorted";
    else cout << "Not sorted";
}