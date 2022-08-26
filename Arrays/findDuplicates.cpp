#include<iostream>
using namespace std;

    // array contain elements[1 to n-1] with each element occur atleast one | find duplicate one
    // fails when size == 2 and elements are {0, 0}
int duplicates(int arr[], int size){
    int ans=0;
    // XORing all array elements
    for(int i=0; i<size; i++){
       ans = ans ^ arr[i];
   }
    // XOR [1, N-1]
    for(int i=1; i<size; i++){
   ans = ans ^ i;
    }
    return ans;
}

int main(){
    int arr[5] = {4, 2, 1, 3, 1};
    cout << duplicates(arr, 5);
    return 0;
}

