#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    string  reverse; 
    for(int i=str.size()-1 ; i >= 0; i--){
        reverse.push_back(str[i]);
    }
    cout << reverse;
    return 0;
}