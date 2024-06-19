#include<bits/stdc++.h>
using namespace std;

void printName(string name){
    cout<<"hey "<<name;
}

int twosome(int a,int b){
    return a+b;
}

void passbyvalue(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;   
}
void passbyreference(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;   
}

void printman(int man[],int n){
    for(int i=0;i<n;i++){
        cout<<man[i]<<" ";
    }
}


int main()
{
    int n=5;
    int man[n];
    for(int i=0;i<n;i++){
        cin>>man[i];
    }
    printman(man,n);
    return 0;
}