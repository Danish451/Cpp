#include<iostream>
using namespace std;

void print(int arr[], int size){
    for(int i=0; i<size; i++){
    cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int size){
    int start = 0, end = size-1;
    while(start <= end){
    swap(arr[start], arr[end]);
    start++;
    end--;
    }
}
int main(){
    int even[6] = {1, 5, 7, 9, 3, -2};
    int odd[5] = {6, 7, 1, 4, 3};

    reverse(even, 6);
    reverse(odd, 5);

    print(even, 6);
    print(odd, 5);
}