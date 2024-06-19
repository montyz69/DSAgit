#include<bits/stdc++.h>
using namespace std;

void output(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    selection_sort(arr,n);
    output(arr,n);
    return 0;
}

