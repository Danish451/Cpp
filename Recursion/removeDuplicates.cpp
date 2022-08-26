#include <iostream>
using namespace std;
void remove(char *input){

}
void removeConsecutiveDuplicates(char *input) {
if(*(input)=='\0')
        return;
 for(int i=0; *(input+i)!='\0'; i++){
    if(*(input+i)==*(input))
    *(input+i) = *(input);
 }   
}
int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}