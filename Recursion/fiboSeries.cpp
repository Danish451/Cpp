/*nth term of fibonacci series
0 1 1 2 3 5 8 13 ........*/
#include<iostream>
using namespace std;

int fiboNum(int n){
    //base case
    if(n==0)
    return 0;

    //base case
    if(n==1)
    return 1;

    int x = fiboNum(n-1);
    int y = fiboNum(n-2);

    return x+y; 
}

int main(){
    int n;
    cin >> n;
    int result = fiboNum(n);

    cout << result;
}