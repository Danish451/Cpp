#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int s=0;        //s--> start point
    int e=n;        //e--> end point
    while (s<=e)
    {
        //chalaki for this---> (s+e)/2
        int mid = s + (e-s)/2;

        if(arr[mid]==key)
        return mid;

        else if(arr[mid]>key)
            e = mid-1;
        
        else
            s = mid+1;
    }
    return -1;
}

int main(){
    int n, result;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i]; 
    }
    int key;
    cin >> key;
    result = binarySearch(arr, n, key);
    if(result != -1)
    cout<<"index of "<< key << " is " << result;
    else
    cout<<result;
    return 0;
}