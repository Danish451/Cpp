#include<iostream>
using namespace std;
int length(char str[]){
    //base case
    if(str[0]=='\0')
    return 0;

    //recursive call
    int smallLength = length(str+1);
    return smallLength+1;
}
int main(){
    char str[100];
    cin >> str;

    int l = length(str);
    cout << l;
}