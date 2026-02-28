/* You are given a string s containing only:
 '(', ')', '{', '}', '[', ']'
 Your task is to check whether the string is valid.
 A string is valid if:
 Every opening bracket has a matching closing bracket
 Brackets are closed in the correct order
 Return true if valid, otherwise false.
*/
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