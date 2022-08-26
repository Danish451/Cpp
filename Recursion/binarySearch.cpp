#include<iostream>
using namespace std;
bool BinarySearch(int arr[], int s, int e, int key){
    //base case
    if(s>e)
    return false;

    int mid = s+(e-s)/2;
    //base case
    if(arr[mid]==key)
    return true;

    if(arr[mid]>key)
    return BinarySearch(arr, s, mid-1, key);

    if(arr[mid]<key)
    return BinarySearch(arr, mid+1, e, key);    
}
int main(){
    int n, s, e, key;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }
    cout << "Enter key" << endl;
    cin >> key;
    s = 0;
    e = n;
    bool ans = BinarySearch(arr, s, e, key);
    cout << ans;
}