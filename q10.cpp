//isomorphic strings

#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t){
    if(s.size() != t.size()) return false;

    unordered_map<char, char> StoT;
    unordered_map<char, char> TtoS;

    for(int i=0 ; i<s.size(); i++){
        char c1 = s[i];
        char c2 = t[i];

        if(StoT.count(c1)){
            if(StoT[c1] != c2) return false;
        }else {
            StoT[c1] = c2;
        }

        if(TtoS.count(c2)){
            if(TtoS[c2] != c1) return false;
        } else{
            TtoS[c2] = c1;
        }

    }
    return true;
}

// T.C = O(n);
// S.C = O(1)