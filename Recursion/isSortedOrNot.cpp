#include<iostream>
using namespace std;

bool isSorted(int a[], int size){
    if(size==0 || size==1)      //base case
    return true;

    if(a[0]>a[1])
    return false;

    return isSorted(a+1, size-1);
}

int main(){
    int n;
    cin >> n;
    int a[20];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    bool s = isSorted(a, n);
    cout << s;
}