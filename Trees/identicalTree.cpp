#include<iostream>
#include<queue>
using namespace std;
class node
{
    public :
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void buildFromlevelOrder(node* &root)
{
    queue<node* >q;
    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for : " << temp->data << endl;
        int left;
        cin >> left;

        if(left != -1)  
        {
            temp->left = new node(left);
            q.push(temp->left);
        }

        cout << "Enter right node for : " << temp->data << endl;
        int right;
        cin >> right;

        if(right != -1)
        {
            temp->right = new node(right);
            q.push(temp->right);
        } 
    }
} 

    bool isIdentical(node *r1, node *r2)
    {
        //base case
        if(r1==NULL && r2==NULL)    return true;
        if(r1 == NULL && r2 != NULL)    return false;
        if(r1 != NULL && r2 == NULL)    return false;
        
        bool l = isIdentical(r1->left, r2->left);
        bool r = isIdentical(r1->right, r2->right);
        
        bool value = r1->data == r2->data;
        
        if(l && r && value)     return true;
        else    return false;
    }

int main()
{
    cout << "TREE 1 " << endl;
    node* r1 = NULL;
    buildFromlevelOrder(r1);
    node* r2 = NULL;
    cout << "TREE 2 " << endl;
    buildFromlevelOrder(r2);

    if(isIdentical(r1, r2)) cout << "TREES ARE IDENTICAL" << endl;
    else    cout << "TREES ARE NOT IDENTICAL" << endl;
}