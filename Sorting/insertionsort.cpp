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

void insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    insertion_sort(arr,n);
    output(arr,n);
    return 0;
}