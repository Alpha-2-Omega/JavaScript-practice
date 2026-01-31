//Check if two strings are anagram of each other

#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t){
    if(s.size() != t.size()) return false;

    unordered_map<char, int> mp;

    //count frequency from first string
    for(char c : s){
        mp[c]++;
    }

    //reduce frequency using second string
    for(char c :t){
        if(mp.find(c) == mp.end()) return false;
        mp[c]--;
        if(mp[c] < 0) return false;
    }

    return true;
}

// T.C = O(n);
// S.C = O(1);