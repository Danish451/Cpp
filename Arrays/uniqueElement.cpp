#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[5] = {2, 8, 2, 9, 8};
    cout << findUnique(arr, 5);
    return 0;
}