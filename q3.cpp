#include <iostream>
#include <stack>

using namespace std;

bool validParanthesis (string str){
    stack<char> st;
    for(int i=0 ; i< str.length(); i++){
        if(st(str[i]) == '}'){
            if(st.top() == NULL){
                return false;
            }
        }
        if(st(str[i]) == '{'){
            st.push('{');
        }
        else{
            st.pop();
            
        }
    }
    return true;
}