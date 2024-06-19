#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
//convert arr to LL
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

//find length of LL

int findlengthofLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

//search in LL
int searchgg(Node* head,int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}



int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(30);
    arr.push_back(20);
    Node* head = convertArr2LL(arr);
    // cout<<head->data;

    //traversing in LL
    // Node* temp = head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }

    //this also works
    // while(head){
    //     cout<<head->data<<" ";
    //     head = head->next;
    // }

    //call length function
    // cout<<findlengthofLL(head);
    
    //call search function
    cout<<searchgg(head,20);

    return 0;
}