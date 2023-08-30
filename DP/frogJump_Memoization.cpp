#include <bits/stdc++.h> 
using namespace std;
int f(int index, vector<int> &heights, vector<int> &dp)
{
    if(index==0)    return 0;
    
    //STEP 3
    if(dp[index] != -1)   return dp[index];

    int left = f(index-1, heights, dp) + abs(heights[index] - heights[index-1]);

    int right = INT_MAX;
    if(index > 1)
    {
         right = f(index-2, heights, dp) + abs(heights[index] - heights[index-2]);
    }
    //STEP 2
    return dp[index] = min(left, right);
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    //STEP 1
    vector<int> dp(n+1, -1);
    return f(n-1, heights, dp);
}