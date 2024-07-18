#include <bits/stdc++.h> 

using namespace std;

void rotatek(vector<int> &arr,int k){
    int n = arr.size();
    k = k%n;
    int x = __gcd(n,k);
    for(int i = 0;i<x;i++){
        int prev = arr[i];
        int j = i;
        while(true){
            int next = (j+k)%n;
            int temp = arr[next];
            arr[next] = prev;
            prev = temp;
            j = (j+k)%n;
            if(j==i){
                break;
            }
        }
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    rotatek(arr,k);
    for(int i =0;i<n;i++)
        cout<<arr[i]<<" ";
    
    return 0;
}