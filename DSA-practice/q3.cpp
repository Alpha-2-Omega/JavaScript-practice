#include <iostream>
#include <stack>

using namespace std;

bool validParanthesis (string str){
    stack<char> st;
    for(int i=0 ; i< str.length(); i++){
        char ch = str[i] ;
        if(ch == '{' || ch == '(' || ch == '['){
            st.push(ch);
        }
        else {
            if(st.empty()) return false;

            char top = st.top();
            st.pop();
            if(ch == '}' && top != '{' || ch == ')' && top != '(' || ch == ']' && top != '['){
                return false;
            }
        }
        
    }
    return st.empty();
        
}