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
};

int main()
{
    vector<int> a(5,1);
    Node* y = new Node(a[0],nullptr);
    cout<<y->data;
    return 0;
}