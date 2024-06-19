// #include<bits/stdc++.h>
// using namespace std;

// int fib(int n,vector<int> &dp){
//     if(n<=1){
//         return n;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     return dp[n] = fib(n-1,dp) + fib(n-2,dp);

// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> dp(n+1,-1);
//     cout<<fib(n,dp);
//     return 0;
// }


//optimal solution

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int prev2 = 0;
    int prev1 = 1;
    for(int i=2;i<=n;i++){
        int ans = prev1 + prev2;
        prev2 = prev1;
        prev1 = ans;
    }
    cout<<prev1;
    return 0;
}