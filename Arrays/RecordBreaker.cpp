#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array"<<endl;
    cin >> n;
    int *p = new int[n];
    cout << "Enter array elements" << endl;
    for(int i=0; i<n; i++){
        cin >> *(p+i);
    }

    if(n==1){
        cout <<"1" << endl;
        return 0;
    }

    int ans = 0;
    int maxi = -1;          //check for if a[i]>a[i-1]

    for(int i=0; i<n; i++){
        if(*(p+i)>maxi && *(p+i)>*(p+i+1))
        ans++;
        maxi = max(maxi, *(p+i));
    }
    cout << ans << endl;
}