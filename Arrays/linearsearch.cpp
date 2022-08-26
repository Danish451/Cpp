#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key)
        return i;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i]; 
    }
    cout << "Enter element you search for" << endl;
    int key;
    cin >> key;
    cout<<linearSearch(arr, n, key);    //-1 means not present
    return 0;
}