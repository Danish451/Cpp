#include<bits/stdc++.h>
using namespace std;
int main(){
    string str, reverse;
    cin >> str;
    for(int i = str.size()-1 ; i>=0; --i){
        reverse.push_back(str[i]);
    }
    if(reverse == str)
    cout << "Palindrome";
    else
    cout << "Not Palindrome";
    return 0;
}