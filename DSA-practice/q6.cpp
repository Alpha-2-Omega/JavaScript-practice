#include <iostream>
// #include <stack>
#include <vector>
using namespace std;

string RemoveOuterParenthesis(string str)
{
    int count = 0;
    string ans = "";
    for (char ch : str)
    {
        if(ch == '('){
            if(count >0 ){
                ans.push_back(ch);
            }
            count++;
        }
        else{        //ch == ')'
            count--;
            if( count > 0){
                ans.push_back(ch);
            }
        }
    }
    return ans;
}


/* time complexity = O(n)
space complexity = O(n)*/