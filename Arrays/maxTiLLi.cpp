#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    //cout << "Enter index" << endl;
    cin >> k;
    //cout << "Enter array" << endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
        int maxNo = INT_MIN;
        for(int i=0; i<=k; i++){
        maxNo = max(maxNo, arr[i]);
    }   cout << maxNo << endl;
}