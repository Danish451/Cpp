#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number" << endl;
    cin >> n;
    
    int prev2 = 0, prev = 1, curi=0;
    for(int i=2; i<=n ; i++)
    {
        curi = prev2 + prev;
        prev2 = prev;
        prev = curi;
    }

    cout << "Fibonacci Number is  " << prev;

    return 0;
    

}