#include<iostream>
using namespace std;

/*int power(int a, int b){
    if(b==0)
    return 1;

    return a*power(a, b-1);
}*/
int fastPower(int a, int b){
    if(b==0)
    return 1;
    
    if(b%2==0)
    return fastPower(a*a, b/2);

    return a*fastPower(a*a, b-1);
}
int main()
{
 int a, b;
 cin >> a >> b;
 //int result = power(a, b);   
 int result = fastPower(a, b);
 cout << result;
}
