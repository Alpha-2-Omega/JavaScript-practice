//reverse words in a string and remove extra spaces

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string ReverseWords(string str){
    int n = str.length();
    string result = "";

    //remove extra spaces
    int i = 0;
    while(i<n && str[i] == ' ') i++;      //skip leading spaces
    while(i<n){
        if(str[i] != ' '){
            result.push_back(str[i]);
        }
        else if(!result.empty() && result.back() != ' '){
            result.push_back(' ');
        }
        i++;
    }

    if(!result.empty() && result.back() == ' '){
        result.pop_back();         //remove trailing space
    }

    //reverse the whole string
    reverse(result.begin(), result.end());

    //reverse each word
    int start =0;
    for(int i=0 ; i<= result.size(); i++){
        if(i == result.size() || result[i] == ' ') {
            reverse(result.begin() + start, result.begin() +i);
            start = i+1;
        }
    }

    return result;
}


int main(){
    string str ;
    getline(cin, str);
    string ans = ReverseWords(str);
    cout<<ans;
    return 0;
}


//Time complexity = O(n)
//Space complexity = O(n)