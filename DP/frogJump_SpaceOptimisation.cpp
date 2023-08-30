#include<bits/stdc++.h>
using namespace std;
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    int prev = 0, prev2 = 0, curi = 0;
    for(int i=1; i<n; i++)
    {
        int fs = prev + abs(heights[i] - heights[i-1]);
        int ss = INT_MAX;
        if(i > 1)
        {
            ss = prev2 + abs(heights[i] - heights[i-2]);
        }
        curi = min(fs, ss);
        prev2 = prev;
        prev = curi;
    }
    return prev;
}