#include<iostream>

using namespace std;

class Stack{
    //properties
    public :
        int *arr;
        int top;    //for indexing
        int size;
    //behaviour
    Stack(int size){
        this ->size = size;
        arr = new int[size];
        top = -1;
    }

    //O(1)
    void push(int element){
        if(top==size-1)
        cout << "Stack Overflow hai!" << endl;

        top++;
        arr[top] = element;
    }
    //O(1)
    int pop(){
        if(top==-1)
        cout << "Stack Underflow" << endl;

        int res = arr[top];
        top--;
        return res;
    
    }
    //O(1)
    int peek(){
       if(top==-1)
       cout << "Stack Underflow" << endl;

       return arr[top];
    }
    //O(1)
    bool isEmpty(){
            return top==-1;
    }
};

int main(){
    Stack st(5);

    st.push(10);
    cout << st.peek() << endl;

    st.push(20);
    st.push(30);
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    cout << st.isEmpty();
}