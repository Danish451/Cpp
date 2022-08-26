#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    
    for(int i=0; i<n; i++)
    {
    cout << arr[i] << " ";
    }
    cout << endl;
}

void Sort_array(int arr[], int n){
    int i=0, j=n-1;         //i -> left     j-> right
    
    while(i<j){
    
        while(arr[i] < arr[j] && i<j)
            i++;
        
        while(arr[i] == arr[j] && i<j)
            j--;

        //agar yha pahunch gye ho, iska matlab
        //arr[i]==1 && arr[j]==0
        if(i<j)
            {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }

        }
    }


int main(){
    int arr[6] = {0, 1, 1, 0, 0, 1};
    Sort_array(arr, 6);

    printArray(arr, 6);
   
    return 0;
}