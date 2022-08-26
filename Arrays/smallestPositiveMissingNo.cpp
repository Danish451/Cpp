#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    const int N = 1e6+2;        //10^6+2
    bool chk[N];

    for(int i=0; i<N; i++){
        chk[i] = false;
    }
    for(int i=0; i<n; i++){
        if(a[i]>=0){
            chk[a[i]] = true;
        }
    }
    int ans = -1;
    for(int i=1; i<N; i++){
        if(chk[i]==false){
            ans = i;
            break;
        }
    }
      cout << ans;
}