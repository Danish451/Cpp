// T.C = O(N)
// S.C = O(N)
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number" << endl;
    cin >> n;
    
    int dp[n+1];

    dp[0] = 0;
    dp[1] = 1;

    for(int i=2; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }    

    cout << "Fibonacci Number is " << dp[n];

}