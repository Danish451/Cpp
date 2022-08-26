#include<bits/stdc++.h>         //problem in compiler not in code
                                // run it on online compiler
using namespace std;
int main(){
    int n;
    cout << "Enter size of array" <<endl;
    cin >> n;
    int *p = new int[n];
    cout << "Enter array elements" << endl;
    for(int i=0; i<n; i++){
        cin >> *(p+i);
    }
    const int N = 1e6+2;        //10^6+2
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }
    int minidx = INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[*(p+i)] != -1)
        minidx = min(minidx, idx[*(p+i)]);
        else
        idx[*(p+i)] = i;
    }
    if(minidx == INT_MAX)
    cout << "-1" << endl;

    else
    cout << "Output = " <<minidx + 1 << endl;

    return 0;
}