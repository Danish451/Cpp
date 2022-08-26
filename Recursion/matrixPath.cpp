#include<iostream>
using namespace std;

int path(int n, int m){
    if(n==1 || m==1)
    return 1;

    return path(n, m-1) + path(m, n-1);
}

int main(){
    int n, m;
    cin >> n >> m;
    int p = path(n ,m);
    cout << p;
}