//using character array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    char ch[n+1];          // since last character is null 
    cin >> ch;

    bool chk = 1;

    for(int i=0; ch[i]!='\0'; i++){
        if(ch[i] != ch[n-i-1]){
        chk = 0;
        break;
    }
    }
    if(chk==1)
    cout << ch <<" is a Palindrome";
    else
    cout  << ch << " is not a Palindrome";
    return 0;
}