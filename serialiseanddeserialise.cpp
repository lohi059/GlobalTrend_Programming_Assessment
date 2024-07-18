#include <bits/stdc++.h>
using namespace std;


struct Node {
	int data;
	struct Node *left, *right;
    Node(int x): data(x),left(NULL),right(NULL){}
};


void serialise(Node* root,vector<int> &ans){ 
    vector<int> ans;
    if(!root) return ;
    ans.push_back(root->data);
    serialise(root->left,ans);
    serialise(root->right,ans);
}

Node* deserialise(vector<int> &ans,int i){
    if(i>=ans.size()){
        return NULL;
    }
    int val = ans[i];
    Node* root = new Node(val);
    root->left = deserialise(ans,i+1);
    root->right = deserialise(ans,i+1);
    return root;
}

int main(void)
{    

    int n ;
    cin>>n;
    vector<Node*> arr(n);
    for(int i=0;i<n;i++){
        int y ;
        cin>>y;
        Node* x = new Node(y);
        if(y!=-1)
        arr[i] = x;
    }
    for(int i =0;2*i+1<n;i++){
        if(arr[i]){
            arr[i]->left = arr[2*i+1];
            if(2*i+2>=n) break;
            arr[i]->right =arr[2*i+2];
        }
    }
    Node* root = arr[0];
	vector<int> ans; 
    serialise(root,ans);
    int x = ans.size();
    for(int i =0;i<x;i++){
        cout<<ans[i]<<endl;
    }
    Node* root = deserialise(ans,0);
	return 0;
}