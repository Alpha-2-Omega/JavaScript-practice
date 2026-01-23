//The stack stores candidates for “next greater element”.
// When you are at an element arr[i], the stack contains elements to the right of i that could be greater than arr[i].

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextGreaterNum(int n, int arr[])
{
    stack<int> st;
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        if(st.empty()) {
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}