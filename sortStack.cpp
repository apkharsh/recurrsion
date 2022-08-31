// sort a stack recurrsively

#include <bits/stdc++.h>
using namespace std;

void sort(stack<int> &s);
stack<int> insert(stack<int> &s, int val);

void sort(stack<int> &s){
    if(s.empty()) return;
    int val = s.top();
    s.pop();
    sort(s);
    insert(s, val);
}

stack<int> insert(stack<int> &s, int val){
    if(s.empty() || s.top() >= val){
        s.push(val);
        return s;
    }
    int temp = s.top();
    s.pop();
    insert(s, val);
    s.push(temp);
    return s;
}

int main(){
    stack<int> s;
    int temp;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        s.push(temp);
    }
    sort(s);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}

// 2 3 6 1 9

// 2

// stack 9 8 10
