#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[n];
    for(int i=0; i<n; i++){
        cin>>num[i]; 
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for(int i=0; i<n; i++){
        maxNo = max(maxNo, num[i]);
         minNo = min(minNo, num[i]);
    }
    cout<< "Max num is " << maxNo << " Min num is "<< minNo<< endl;
       

}