#include<iostream>
#include<queue>
using namespace std;
int main(){
    //creating a queue
    queue <int> q;

    //push operation
    q.push(10);
     cout << "Front element of q is:  " << q.front() << endl;
    q.push(20);
    q.push(30);
     cout << "Front element of q is:  " << q.front() << endl;
    q.push(40);

    //pop operation     FIFO
    q.pop();

    //front element
    cout << "Front element of q is:  " << q.front() << endl;

    //empty operation
    if(q.empty()){
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
}