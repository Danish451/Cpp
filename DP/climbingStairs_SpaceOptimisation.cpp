#include<iostream>
using namespace std;
#define mod 1000000007
int countDistinctWays(int nStairs) {
    //  Write your code here.
    if(nStairs == 0 || nStairs == 1)    return 1;
    int prev2 = 1, prev = 1;
    int curi;
    for(int i=2; i<=nStairs; i++)
    {
        curi = (prev2 + prev)%mod;
        prev2 = prev;
        prev = curi;
    }
    return curi % mod;
}
int main()
{
    int n;
    cout << "Number of Stairs " << endl;
    cin >> n;

    cout << "Count ways are : " << countDistinctWays(n);
}