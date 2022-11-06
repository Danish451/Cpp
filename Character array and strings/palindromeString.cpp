#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool chk = 0;
    for(int i=0; i<=(s.size())/2; i++){
        if(s[i]!=s[s.size()-i-1])
     {
        chk = 1;
        break;
     }
    }
    if(chk==0)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}