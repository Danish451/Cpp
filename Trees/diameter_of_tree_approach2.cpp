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
int height(node* root)
  {
     //base case
    if(root == NULL)    return 0;

    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;

    return ans;
}
pair<int, int> fastDiameter(node* root)
{
    
    pair<int, int> p = make_pair(0, 0);
    if(root == NULL)    return p;

    pair<int, int> left = fastDiameter(root->left);
    pair<int, int> right = fastDiameter(root->right);
    
    int op1 = left.first;
    int op2 = right.first;

    int op3 = left.second + right.second + 1;
    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));        //diameter
    //+1 for root node
    ans.second = max(left.second, right.second) + 1;    //height

    return ans;

}
   int diameter(node* root) {
        
        return fastDiameter(root).first;
        
    }
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
int main()
{
    node* root = NULL;
    buildFromlevelOrder(root);

    cout << "DIAMETER OF TREE = " << diameter(root);
}