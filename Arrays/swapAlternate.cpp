#include<iostream>
using namespace std;

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void alternate(int arr[], int size){
    
    int a = 0, b = 1;
    while(b<=size-1){
    swap(arr[a], arr[b]);

    //In case swap inbuilt function not working
/*  int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;    
*/
    a += 2;
    b += 2;
    }

}

int main(){

    int arr[5] = {1, 2, 7, 8, 5};
    int brr[6] = {1, 2, 3, 4, 5, 6};
    
    alternate(arr, 5);
    alternate(brr, 6);
    
    print(arr, 5);
    print(brr, 6);
    return 0;
}