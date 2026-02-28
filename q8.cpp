//largest odd number in a string

#include <iostream>
#include <string>
using namespace std;
 string largestOddNum(string s){
    int idx = -1;
    for(int i= s.size() -1 ; i>= 0 ; i++){
        int digit = s[i] - '0';
        if(digit % 2 == 1){
            idx = i;
            break;
        }
    }
    if(idx == -1){
        return "";
    }
    return s.substr(0, idx +1);
 }
 
 int main(){
     string s = "";
     cin>>s;
     string ans = largestOddNum(s);
     cout<<"largest odd substring is "<<ans;
     return 0;
 }