#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int *p = new int[n];
    for(int i=0; i<n; i++){
        cin >> *(p+i);
    }
    int sum;
    for(int i=0; i<=n-1; i++){
        sum = 0;
        for(int j=i; j<=n-1; j++){
            sum += *(p+j);
            cout << sum << " ";
        }
    }
    delete []p;
}