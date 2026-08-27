#include<iostream>
using namespace std;
#include<vector>

int maxEle( vector<int> arr, int n){
    int mEle = arr[0];
    int sEle = INT_MIN;
    for(int i=0 ; i<n ; i++){
        if(arr[i]> mEle){
            sEle = mEle;
            mEle = arr[i];
        }
        else if(arr[i] < mEle && sEle < arr[i]){
            sEle = arr[i];
        }
    }
    return sEle;
}

int main(){
    int n = 5;
    vector<int> arr(n);
    for(int i =0 ; i<n ; i++){
        cin >> arr[i];
    }
    int sEle = maxEle(arr, n);
    cout<< "2nd max element is " << sEle<<endl;
    return 0;
}