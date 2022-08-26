#include<iostream>
using namespace std;
void removeX(char s[]){
    //base case
    if(s[0]=='\0')
    return ;
/*two cases :- 1) if x is not on 0th index
                2) if x is on 0th index */

    if(s[0]!='x')
    removeX(s+1);
    else{                   //shift all charater to left
        int i=1;        //so that access of i also on line 17th to shift null character
        for(; s[i] != '\0'; i++){
            s[i-1] = s[i];
        }
        s[i-1] = s[i];
        
        //recursive call
        removeX(s);         //as string size is reduced so only pass s
    }
}
int main(){
    char str[100];
    cin >> str;
     removeX(str);
    cout << str;
}