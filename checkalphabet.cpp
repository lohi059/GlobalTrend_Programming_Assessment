#include <bits/stdc++.h> 

using namespace std;

int main(){
    string str; 
    cin >> str; 
    int n = str.size(); 
    for(int i = 0; i < n; i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            continue; 
        else {
            cout << "NO" << endl; 
            return 0; 
        } 
    }    
    cout << "YES" << endl; 
    return 0; 
}
