#include<iostream>
using namespace std;
bool linearSearch(int arr[], int size, int k ) {
    
    //base case
    if(size == 0) 
        return false;

    if(arr[0] == k) {
        return true;
    }
    else {
        bool remainingPart = linearSearch(arr+1, size-1, k );
        return remainingPart;
    }
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    bool ans = linearSearch(arr, size, key);

    if(ans ){
        cout << "Present " << endl;
    }
    else{
        cout << "absent " << endl;
    }

    return 0;
}