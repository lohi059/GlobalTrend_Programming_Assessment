#include <bits/stdc++.h> 

using namespace std;

int longestsubstring(string s){
    vector<int> arr(128,-1);
    int n = s.size();
    int ans = 0;
    int count = 0;
    for(int i =0;i<n;i++){
        int x = s[i];
        if(arr[x] != -1 && arr[x]>=count){
            ans = max(ans,i-count);
            count = arr[x]+1;
        }
        arr[x] = i;
    }
    
    if(ans<n-count){
        ans = n-count;
    }
    return ans;
}

int main(){

    string s;
    cin>>s;
    cout<<longestsubstring(s);

    return 0;
}