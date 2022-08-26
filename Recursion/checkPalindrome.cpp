#include<iostream>
using namespace std;

bool checkPalindrome(string& str, int i){
    //base case
    int n = str.length();
    if(n-i-1<i)
    return true;

    //recursive approach
    if(str[i] != str[n-i-1])
    return false;

    //recursive call
    else
    return checkPalindrome(str, i+1);
}

int main(){
    string name = "bookkoob";

    bool isPalindrome = checkPalindrome(name, 0);

    if(isPalindrome)
    cout << "This is a Palindrome" << endl;

    else
    cout << "This is not a Palindrome" << endl;
    
    return 0;
}