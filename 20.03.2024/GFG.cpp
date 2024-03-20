class Solution
{
public:
    int m = 0;
    int ans = 0;
    void solve(Node* root, int h, int s)
    {
        if(!root)
        {
            return ;
        }
        // leaf node ki condition check krenge 
        if(root->left == NULL && root->right ==NULL)
        {
             s = s+root->data;
            if(h>m)
            {
                m=h;
                ans = s;
            }
            else if(h == m)
            {
                ans = max(ans,s);
            }
            return ;
        }
        s = s+root->data;
        solve(root->left,h+1,s);
        solve(root->right,h+1,s);
        // return sum;
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
     solve(root,0,0);
    return ans;
    }
};