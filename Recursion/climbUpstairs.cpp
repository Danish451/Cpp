//number o ways to climb up stairs
#include<iostream>
using namespace std;

int climbUp(int n){
    //base case
    if(n<0)
    return 0;

    //base case
    if(n==0)        //0th stair se 0th stair pr aane ke ways = 1 (uchal kar vaapas aa jao)
    return 1;

    // Recursive call
    int ans = climbUp(n-1) + climbUp(n-2);  //destination par ya to pichli siddhi se aaye ho ya uski bhi pichli siddi se!!

    return ans;
}

int main(){
    int n;
    cin >> n;
    int ways = climbUp(n);
    cout << ways;
}
