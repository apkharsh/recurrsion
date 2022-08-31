// Code to sort an array recurrsively
#include <bits/stdc++.h>
using namespace std;
// Predeclaring the functions beacuse we are gonna use them in each other
void sort(vector<int> &arr);
vector<int> insert(vector<int> &arr, int val);
// 4 3 5 1 2
// Sort the array recurrsively
void sort(vector<int> &arr)
{
    if (arr.size() == 1) return;
    int temp = arr[arr.size() - 1];
    arr.pop_back();
    sort(arr);
    insert(arr, temp);
    return;
}

// I
t the value in the sorted array
vector<int> insert(vector<int> &arr, int temp)
{
    // if the element we are trying to insert is greater than the last element in the array or if the array is empty then we are gonna push_back the element directly
    if (arr.size() == 0 || temp >= arr[arr.size() - 1]){
        arr.push_back(temp);
        return arr;
    }
    // If the element is not the largest and nor the array is empty then we are gonna find its place using insert function recurrsively. 
    int last = arr[arr.size() - 1];
    arr.pop_back();
    arr = insert(arr, temp);
    arr.push_back(last); 
    return arr;
}
int main()
{
    int N; cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];
    sort(arr);
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
}