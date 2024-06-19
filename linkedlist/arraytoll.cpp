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

//this also works  print a LL
void printLL(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

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

Node* deletehead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL || head->next ==NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;
}

Node* deleteKthelement(Node* head,int K){
    if(head==NULL) return head;
    if(K==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == K){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head; 
}

Node* deleteValuelement(Node* head,int val){
    if(head==NULL) return head;
    if(head->data==val){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data==val){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head; 
}

Node* insertathead(Node* head,int val){
    return new Node(val,head);
}

Node* insertattail(Node* head,int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}


int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    Node* head = convertArr2LL(arr);
    // cout<<head->data;

    //traversing in LL
    // Node* temp = head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }

    //this also works // print a LL
    // while(head){
    //     cout<<head->data<<" ";
    //     head = head->next;
    // }

    //call length function
    // cout<<findlengthofLL(head);
    
    //call search function
    // cout<<searchgg(head,20);

    //call delete head function
    // head = deletehead(head);
    // printLL(head);

    //call delete tail function
    // head = deleteTail(head);
    // printLL(head);

    //call delete Kth element function
    // head = deleteKthelement(head,3);
    // printLL(head);

    //call delete Kth element function
    // head = deleteValuelement(head,30);
    // printLL(head);

    //call insert at head function
    // head = insertathead(head,0);
    // printLL(head);

    //call insert at head can be directly called as
    // head = new Node(0,head);
    // printLL(head);

    //call insert at tail function
    // head = insertattail(head,0);
    // printLL(head);



    return 0;
}