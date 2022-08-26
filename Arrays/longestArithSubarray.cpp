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
    int ans = 2;        //min 2 is the length of subarray
    int pd = *(p+1) - *(p);         //previous difference
    int currlen = 2;        //current length of subarray

    int j=2;
    while(j<n){
        if(pd == *(p+j)-*(p+j-1))
        currlen++;

        else{
            pd = *(p+j) - *(p+j-1);
            currlen = 2;
        }
        ans = max(ans, currlen);
        j++;
    }
    cout << "Maximum length of arithmetic array is"<<ans;
    delete [] p;
    return 0;
}