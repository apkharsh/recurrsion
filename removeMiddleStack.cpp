
#include <bits/stdc++.h>
using namespace std;


void solve(stack<int> &st, int mid){
    if(mid == 1){
        st.pop();
        return;
    }
    int val = st.top();
    st.pop();
    solve(st, mid-1);
    st.push(val);
    return;
}

int main(){
    int size; cin >> size;
    stack<int> st;
    while(size--){
        int x; cin >> x;
        st.push(x);
    }

    int mid = st.size()/2 + st.size()%2;
    solve(st,mid);
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}