#include <bits/stdc++.h> 

using namespace std;
struct Node{
    int val;
    Node* next;
    Node(int x) : val(x),next(NULL){}
};

Node* reverseList(Node* head) {
    int i=0;
    Node* prev = nullptr;
    Node* ne = nullptr;

    while(head->next!=nullptr){
       ne = head->next;   
       head->next = prev;
       prev = head;
       head = ne;
       i++;
    }
    head->next = prev;
    return head;
}

int main(){
    int n;
    cin>>n;
    Node* head = nullptr;
    Node* prev = nullptr;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        Node* node = new Node(x);
        if(!head){
            head = node;
            prev = node;
        }else{
            prev->next = node;
            prev = node;
        }
    }
    
    head = reverseList(head);
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }

    return 0;
}