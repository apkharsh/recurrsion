// You are provided two sorted arrays. You need to find the maximum length of bitonic subsequence. You need to find the sum of the maximum sum path to reach from beginning of any array to end of any of the two arrays. You can switch from one array to another array only at common elements.

// #include <bits/stdc++.h>
// using namespace std;
// int solve(int arr1[], int arr2[], int n, int m, int i, int j, int summ){
//     if(i==n || j==m) return summ;
//     // if element of arr1 and arr2 at an index is same
//     if(arr1[i]==arr2[j]) {
//         // there are 3 things which we can do if we find a match
//         // 1. We increment index of both arr1 and arr2
//         // 2. We increament index of arr1 and keep index of arr2 same
//         // 3. We increament index of arr2 and keep index of arr1 same
//         // we will return the maximum of all the three
//         return max({solve(arr1,arr2,n,m,i+1,j+1,summ+arr1[i]),solve(arr1,arr2,n,m,i+1,j,summ+arr1[i]),solve(arr1,arr2,n,m,i,j+1,summ+arr1[i])});
//     }
//     else {
//         return max(solve(arr1,arr2,n,m,i+1,j,summ+arr1[i]),solve(arr1,arr2,n,m,i,j+1,summ+arr2[j]));
//     }
// }

// // 2 3 7 10 12 15 30 34
// // 1 5 7 8 10 15 16 19

// int main(){
//     /*Write your code here*/
//     int T; cin >> T;
//     while(T--){
//         int n,m; cin >> n >> m;
//         int arr1[n], arr2[m];
//         for(int i=0; i<n; i++) cin >> arr1[i];
//         for(int i=0; i<m; i++) cin >> arr2[i];
//         // i and j are the index which i am using for iteration in both the arrays
//         int i=0, j=0;
//         int summ = 0;
//         cout << solve(arr1, arr2, n, m, i, j, summ);

//     }
// }

#include <bits/stdc++.h>
using namespace std;

// approach 1: iterative method
// we will compare both the arrays and if we find a match we will add the element to the sum and increment the index of both the arrays. If we don't find a match we will increment the index of the array which has the smaller element. We will do this until we reach the end of any of the array. We will return the sum.

int solve(int arr1[], int arr2[], int m, int n)
{
    int sum1 = 0;
    int sum2 = 0;
    int ans = 0;
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        // if arr1[i] << arr2[j] then we will add the element of arr1 in sum 2
        if (arr1[i] < arr2[j])
            sum1 += arr1[i++];
        else if (arr1[i] > arr2[j])
            sum2 += arr2[j++];
        else
        {
            ans += max(sum1, sum2);
            sum1 = 0;
            sum2 = 0;
            while (i < m && j < n && arr1[i] == arr2[j])
            {
                ans += arr1[i];
                i++;
                j++;
            }
        }
    }

    while (i < m)
        sum1 += arr1[i++];
    while (j < n)
        sum2 += arr2[j++];
    ans += max(sum1, sum2);
    return ans;
}

int main()
{
    /*Write your code here*/
    int T;
    cin >> T;
    while (T--)
    {
        int m, n;
        cin >> m >> n;
        int arr1[m], arr2[n];
        for (int i = 0; i < m; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];
        int sum1 = 0, sum2 = 0, ans = 0;
        cout << solve(arr1, arr2, m, n) << endl;
    }

    return 0;
}

// 1 2 3 5 6 8 9
// 1 3 4 5 6 7 8 9