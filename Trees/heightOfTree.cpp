#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
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

int height(node* root)
{
    //base case
    if(root == NULL)    return 0;

    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;

    return ans;
}
int main()
{
    node* root = NULL;
    buildFromlevelOrder(root);


    cout << "Height of tree is " << height(root);

}
//1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 9 8 -1 -1 -1 -1