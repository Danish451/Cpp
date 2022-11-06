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

pair<bool, int> isSumTreeFast(node* root)
    {
        //base case
        if(root == NULL)
        {
            pair<bool, int>p = make_pair(true, 0);
            return p;
        }
        //leaf node
        if(root->left == NULL && root->right == NULL)
        {
            pair<bool, int>p = make_pair(true, root->data);
            return p;
        }
        pair<bool, int> l = isSumTreeFast(root->left);
        pair<bool, int> r = isSumTreeFast(root->right);
        
        bool left = l.first;
        bool right = r.first;
        
        bool cond = l.second + r.second == root->data;
        
        pair<bool, int> ans;
        if(left && right && cond)   
        {
            ans.first = true;
            ans.second = 2*root->data;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }
    
    bool isSumTree(node* root)
    {
         return isSumTreeFast(root).first;
    }

int main()
{
    
    node* root = NULL;
    buildFromlevelOrder(root);

    if(isSumTree)   cout << "YES" << endl;
    else    cout << "NO" << endl;
    
}