#include<iostream>      //Repeatedly swap two adjacent elements if they are in wrong order
using namespace std;       // n-i iterations before we get our sorted array
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i]; 
    }
    int counter = 1;
    while(counter < n){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
        }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
}
