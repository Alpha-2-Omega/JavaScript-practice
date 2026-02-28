// You are given a string s.
// Find the first character that does NOT repeat in the string.
// If no such character exists, return '-1'.

#include <iostream>
#include <unordered_map>
using namespace std;

char singleOccurrence(string str){
    unordered_map <char, int> mp;
    for(int i=0 ; i < str.length() ; i++){
        mp[str[i]]++;
    }
    for(int i=0 ; i < str.length() ; i++){
        if(mp[str[i]] == 1){
            return str[i];
        }
    }
    return -1;
}