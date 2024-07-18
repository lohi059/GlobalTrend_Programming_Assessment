#include <bits/stdc++.h> 

using namespace std;

int maximumdiff(vector<int> &arr){
    int mi = arr[0];
    int n = arr.size();
    int ans = 0;
    for(int i=1;i<n;i++){
        if(mi>arr[i]){
            ans += mi -arr[i];
            mi = arr[i];
        }else{
            ans = max(ans,arr[i]-mi);
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) 
        cin>>arr[i];
    cout<<maximumdiff(arr);
    return 0;
}