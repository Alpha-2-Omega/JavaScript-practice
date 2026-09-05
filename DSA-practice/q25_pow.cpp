#include<iostream>
using namespace std;

//recursion
double myPow1(double x, int n){

    long long nn = n;
    if(nn == 0) return 1;
    if(nn<0) {
        x = 1/x;
        n = -n;
    }
    double p = myPow1(x, n/2);
    return n%2==0 ? p*p : p*p*x;
}

//iteration
double myPow2(double x, int n){
    double ans = 1.0;
    long long nn = n;
    if(nn<0){
        nn = -1 * nn;
    }
    while(nn>0){
        if(nn%2 != 0){
            ans = x* ans;
            nn = nn-1;
        }else{
            x = x*x;
            nn= nn/2;
        }
    }
    if(n<0) ans = 1/ans;
    return ans;
}

int main(){
    double x = 2.5;
    int n =3; 

    double ans1 = myPow1(x,n);
    double ans2 = myPow2(x,n);

    cout<<"ans1 (recursion):"<<ans1<<endl;
    cout<<"ans2 (iteration):"<<ans2<<endl;

    return 0;

}