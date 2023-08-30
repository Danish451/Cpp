#include<bits/stdc++.h>
using namespace std;
int f(int n, int k, vector<int> &heights, vector<int> &dp)
{
  if(n==0)  return 0;

  if(dp[n] != -1)   return dp[n];

  int minSteps = INT_MAX;
  for(int j=1; j<=k; k++)
  {
    if(n - j >= 0)
    {
      int jump = dp[n-j] + abs(heights[n] - heights[n-j]);
      minSteps = min(minSteps, jump);
    }
  }
  return minSteps;
}
int frogJumps(int n, int k, vector<int> &heights){
  vector<int> dp(n+1, -1);
  return f(n-1, k, heights, dp);
}
int main(){
	vector<int> heights;
  	int n, k;
  	cin >> n >> k;
  	for(int i=0; i<n; i++){
        int x;
        cin >> x;
        heights.push_back(x);
    }
  	cout << frogJumps(n, k, heights);
}