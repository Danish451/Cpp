// T.C = O(N)
// S.C = O(N) + O(N)
#include<iostream>
#include<cstring>
using namespace std;
int fibo(int n, int* dp)
{
    if(n <= 1)
    {
        return n;
    }

    if(dp[n] != -1)
    {
        return dp[n];
    }

    return dp[n] = fibo(n-1, dp) + fibo(n-2, dp);

}
int main()
{
    int n;
    cout << "Enter Number" << endl;
    cin >> n;
    
    int dp[n+1];
    //set all elements to -1
    memset(dp, -1, sizeof(dp));

    cout << "Fibonacci number is " << fibo(n, dp);

}