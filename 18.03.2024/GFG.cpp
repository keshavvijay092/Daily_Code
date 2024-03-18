class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
     queue<Node*>qt;
     qt.push(root);
     vector<int> ans;
     while(!qt.empty())
     {
         Node* nxt = qt.front();
         qt.pop();
         ans.push_back(nxt->data);
         if(nxt->left)
         {
             qt.push(nxt->left);
         }
        if(nxt->right)
         {
             qt.push(nxt->right);
         }
     }
     return ans;
    }
};