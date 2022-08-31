// merge two sorted arrays 
#include <bits/stdc++.h>
using namespace std;

// merge two sorted arrays recurrsively
void rMerge(int *arr1, int* arr2, int* sorted, int n1, int n2){
    if(n1==0 && n2==0) return;
    if (arr1[0] < arr2[0]) {
        sorted[0] = arr1[0];
        rMerge(arr1 + 1, arr2, sorted + 1, n1 - 1, n2);
    } else {
        sorted[0] = arr2[0];
        rMerge(arr1, arr2 + 1, sorted + 1, n1, n2 - 1);
    }
}

// Merge two sorted arrays recurrsively
// void mergeArr(int* arr1, int* arr2, int* sorted, int size1, int size2){
//     int i = 0, j = 0, k = 0;
//     while(i < size1 && j < size2){
//         if(arr1[i] < arr2[j]) sorted[k++] = arr1[i++];
//         else sorted[k++] = arr2[j++];
//     }
//     while(size1>i) sorted[k++] = arr1[i++];
//     while(size2>j) sorted[k++] = arr2[j++];
// }

// Merge two sorted vectors iteratively
// void merge(vector<int> arr1, vector<int> arr2, vector<int> &sorted){
//     int i = 0, j = 0;
//     while(i< arr1.size() && j < arr2.size()){
//         if(arr1[i] < arr2[j]) sorted.push_back(arr1[i++]);
//         else sorted.push_back(arr2[j++]);
//     }
//     while(arr1.size()>i) sorted.push_back(arr1[i++]);
//     while(arr2.size()>j) sorted.push_back(arr2[j++]);
// }

int main(){
    int m, n; cin >> m >> n;
    int arr1[m], arr2[n];
    for(int i = 0; i < m; i++) cin >> arr1[i];
    for(int i = 0; i < n; i++) cin >> arr2[i];
    int sorted[m+n];
    // mergeArr(arr1, arr2, sorted, m,n);
    // rMerge(arr1, arr2, sorted, m,n);
    // for(int i = 0; i < m+n; i++) cout << sorted[i] << " ";
    cout << arr1[6] << " " << arr2[6] << endl;

    // vector<int> sorted;
    // int n; cin >> n;
    // vector<int> arr1(n); 
    // for (int i = 0; i < n; i++) cin >> arr1[i];
    // int m; cin >> m;
    // vector<int> arr2(m);
    // for (int i = 0; i < m; i++) cin >> arr2[i];
    // merge(arr1, arr2, sorted);
    // for (int i = 0; i < sorted.size(); i++) cout << sorted[i] << " ";
}