#include <bits/stdc++.h>
using namespace std;


struct Node {
	int data;
	struct Node *left, *right;
    Node(int x): data(x),left(NULL),right(NULL){}
};


int maxpath(Node* root, int& ans)
{
    if (root == NULL)
		return 0;
	int left = maxpath(root->left, ans);
	int right = maxpath(root->right, ans);

	int sub
		= max(max(left, right) + root->data, root->data);
	int top = max(sub, left + right + root->data);
	ans = max(ans, top); 
	return sub;
}


int pathSum(Node* root)
{
	int ans = INT_MIN;
    maxpath(root, ans);
	return ans;
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

	cout<< pathSum(root);
	return 0;
}
