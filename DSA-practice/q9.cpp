//Longest common prefix

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& s){
    if(s.empty()) return "";

    string ref = s[0];
    string ans ="";
    for(int i=0 ; i < ref.size(); i++){
        for(int j = 1 ; j < s.size(); j++)
        if(i >= s[j].size() || ref[i] != s[j][i]){
            return ans;
        }
        else{
            ans.push_back(ref[i]);
        }
    }
    return ans;
}