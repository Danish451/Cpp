#include<bits/stdc++.h>
using namespace std;
int length(char input[]){
    int len = 0;
    for(int i=0; input[i] !='\0'; i++){
        len++;
    }
    return len;
}
void pairStar(char input[], int start){
    //base case
    if(input[start] == '\0')
        return;
    
    pairStar(input, start+1);
    if(input[start] == input[start+1]){
        int l = length(input);
        input[l+1] = '\0';
        for(int i=l-1; i>start; i--){
            input[i+1] = input[i];
        }
        input[start+1] = '*';
    }
}
void pairStar(char input[]){
    pairStar(input, 0);
}
int main(){
    char input[50];
    cin >> input;
    pairStar(input);
    cout << input << endl;
    return 0;
}