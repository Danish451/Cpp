#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public :
    int data;
    Node* left;
    Node* right;
    
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> result;
    	if(root == NULL)
    	{
    	    return result;
    	}
    	queue <Node* >q;
    	q.push(root);
    	bool leftToRight = true;
    	
    	while(!q.empty())
    	{
    	    int size = q.size();
    	    vector<int> ans(size);
    	    //level order
    	    for(int i=0; i<size; i++)
    	    {
    	        Node* temp = q.front();
    	        q.pop();
    	        //Normal insert or reverse insert
    	        int index = leftToRight ? i : size - i - 1;
    	        ans[index] = temp->data;
    	        
    	        if(temp->left)  q.push(temp->left);
    	        if(temp->right) q.push(temp->right);
    	    }
    	    //direction change
    	    
    	    leftToRight = !leftToRight;
        
           	for(auto i: ans)     result.push_back(i);
    	}
    
    	return result;
    }
void buildFromlevelOrder(Node* &root)
{
    queue<Node* >q;
    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    root = new Node(data);

    q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout << "Enter left node for : " << temp->data << endl;
        int left;
        cin >> left;

        if(left != -1)  
        {
            temp->left = new Node(left);
            q.push(temp->left);
        }

        cout << "Enter right node for : " << temp->data << endl;
        int right;
        cin >> right;

        if(right != -1)
        {
            temp->right = new Node(right);
            q.push(temp->right);
        } 
    }
} 
int main()
{
    Node* root = NULL;
    buildFromlevelOrder(root);

    //zig zag traversal
    vector<int> ans;
    ans = zigZagTraversal(root);
    cout << "ZIG - ZAG TRAVERSAL IS " << endl;
    for(int i=0; i<ans.size(); i++)   cout << ans[i] << " ";


}
//1 2 4 3 5 -1 6 -1 -1 -1 -1 7 8 -1 -1 -1 -1