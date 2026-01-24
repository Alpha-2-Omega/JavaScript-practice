//You are given an array price[] of size n where price[i] represents the price of a stock on the i-th day.
// The span of the stock’s price on a given day i is defined as the maximum number of consecutive days (ending on day i) for which the stock price was less than or equal to the price on day i.


#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> stockSpan(int n, int arr[])
{
    stack<int> st;
    vector<int> span(n);
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] <= arr[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            span[i] = i + 1;
        }
        else
        {
            span[i] = i - st.top();
        }
        st.push(i);
    }
    return span;
}