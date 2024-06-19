#include<bits/stdc++.h>
using namespace std;
int main()

{
    char dsa;
    cin>>dsa;
    if(isupper(dsa)){
        cout<<"1";
    }
    else if(islower(dsa)){
        cout<<"0";
    }
    else{
       cout<<"-1";
    }
    return 0;
}