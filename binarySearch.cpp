// let's do binary search with recurrsion

#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int low, int high, int target){
    if(low>high) return low;
    int mid = (high + low) / 2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] > target) return solve(arr, low, mid-1, target);
    else return solve(arr, mid+1, high, target);
}
int main(){
    /*Write your code here*/
    int n, target; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cin >> target;
    cout << "element found at index " << solve(arr, 0, n-1, target);
    return 0;
}