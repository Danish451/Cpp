#include<iostream>
using namespace std;
int power(int x, int y){
    //base case
    if(y==0)
    return 1;

    int smallAns = x*power(x, y-1);
    return smallAns;
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << power(x, y);
}