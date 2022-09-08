
#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int i, int j)
{
    if(i>j) return 0;
    int choice1 = arr[i] + min(solve(arr, i+2, j), solve(arr, i+1, j-1));
    int choice2 = arr[j] + min(solve(arr, i+1, j-1), solve(arr, i, j-2));
    return max(choice1, choice2);
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << solve(arr, 0, n-1) << endl;
    return 0;
}
