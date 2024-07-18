#include <bits/stdc++.h> 

using namespace std;

int gcd(int a,int b){
    if(a>b)
       return gcd(b,a);
    while(true){
        if(b%a==0) return a;
        int temp = a;
        a = b%a;
        b = temp;
    }
    return 1;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}