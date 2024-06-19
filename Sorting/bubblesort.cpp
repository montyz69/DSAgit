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

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    bubble_sort(arr,n);
    output(arr,n);
    return 0;
}