#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

#define SimpleInterest(P,R,T)((P*R*T)/100)

int main() {
    //Write your code here
    double P,R,T,A;
    cin>>P;
    cin>>R;
    cin>>T;
    A=SimpleInterest(P,R,T);
    cout<<A;
    return 0;
}