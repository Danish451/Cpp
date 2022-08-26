#include<iostream>
using namespace std;

void reverse(string& str, int i){
    int n = str.length();
    //base case
    if((n-i-1)<i)
    return;

    swap(str[i], str[n-i-1]);
    i++;
    //recursive call
    reverse(str, i);
    
}

int main(){
    string name = "danish";
    reverse(name, 0);
    cout << name << endl;
}