#include<iostream>
# pragma pack(3)
using namespace std;
class demo{
    int a;
    char c;
};
int main()
{
    demo d;
    cout << sizeof(d);
}