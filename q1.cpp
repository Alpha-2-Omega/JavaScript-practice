// q1 - You are given an array of integers arr of size n.
// Your task is to find the first element that occurs more than once in the array.
// If no such element exists, print -1.

#include <iostream>
#include <unordered_map>
using namespace std;

int repeatedNum(int n, int arr[])
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr[i]) != mp.end())
        {
            return arr[i];
        }
        mp[arr[i]]++;
    }
    return -1;
}
