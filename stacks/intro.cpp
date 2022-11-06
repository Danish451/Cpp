#include<iostream>
#include<stack>
using namespace std;
int main(){
    //creation of stack
    stack <int> s;

    //push operation
    s.push(10);
    s.push(20);
    
    //size of stack
    cout << "size of stack is " <<  s.size() << endl;

    //pop operation
    s.pop();

    //top operation
    cout << "Top of stack is " << s.top() << endl;
    //empty operation
    if(s.empty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
    //size of stack
    cout << "size of stack is " <<  s.size();
}