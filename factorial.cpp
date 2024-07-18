#include <bits/stdc++.h> 

using namespace std;

string mul(string str,int x){
    int k  = 0;
    for(int i = str.size()-1;i>0;i--){
        int y = (str[i]-'0'); 
        y = y*x;
        y = y+k;
        char f = '0'+ y%10;
        str[i] = f;
        k = y/10;
    }
    int c = (str[0]-'0');
    c = c*x;
    c = c + k;
    char d  = '0'+ c%10;
    str[0] = d;
    c = c/10;
    if(c!=0){
        stringstream ss;
        ss << c;
        string str1;
        ss >> str1;
        str = str1 + str;
    }
    return str;
}


string factorial(int A) {
    string a;
    a = "1";
    for(int i = 2; i<=A;i++){
      a =   mul(a,i);
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}

