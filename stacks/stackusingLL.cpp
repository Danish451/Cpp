#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next;

    /*
        Node(int data){
            this->data = data;
            this->next = NULL;
        }*/
};
class Stack{
    Node* head;
    int size;

    public:
        Stack(){
            head = NULL;
            size = 0;
        }

        void push(int data){
            Node* temp = new Node;
            temp->data = data;
            temp->next = head;
            size++;
            head = temp;
        }
        int peek(){
            if(head==NULL)
            cout << "Stack Underflow" << endl;

            return head->data;
        }

        int pop(){
            if(head==NULL)
            cout << "Stack Underflow" << endl;

            int res = head->data;
            head = head->next;
            size--;
            return res;
        }
        bool empty(){
            return head==NULL;
        }
        int Size(){
            return size;
        }
};
int main()
{
    //Node n1(10);
    
    Stack s;
    s.push(10);
    cout << s.peek() << endl;
    s.push(20);
    cout << s.peek() << endl;

    s.pop();
    cout << s.peek() << endl;

    cout << "IS EMPTY = " << s.empty() << endl;

    cout << "SIZE = " << s.Size() <<endl; 
}