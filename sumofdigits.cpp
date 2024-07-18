#include <bits/stdc++.h> 

using namespace std;

int sumofdigits(int n){
    string s = to_string(n);
    int ans =0;
    int x = s.size();
    for(int i=0;i<x;i++){
        ans += s[i] -'0';
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<sumofdigits(n);
    return 0;
}