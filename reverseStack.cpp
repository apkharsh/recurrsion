// write a code to reverse a stack recurrsively
#include <bits/stdc++.h>
using namespace std;

// void insert(stack<int> &st, int val);
// void reverse(stack<int> &st);

void insert(stack<int> &st, int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int top = st.top();
    st.pop();
    insert(st, val);
    st.push(top);
}

void reverse(stack<int> &st){
    if(st.size() == 1) return;
    int val = st.top();
    st.pop();
    reverse(st);
    insert(st, val);
}

int main(){
    stack<int> st;
    int n; cin >> n;
    while (n--){
        int x; cin >> x;
        st.push(x);
    }

    reverse(st);
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}