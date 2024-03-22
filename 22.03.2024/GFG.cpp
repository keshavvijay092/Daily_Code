class Solution
{
    public:
    void solve(Node* root,map<int,int>& val , int level)
    {
        if(!root) return ;
        
        val[level] = val[level]+ root->data;
        
        
        solve(root->left,val,level+1);
        solve(root->right,val,level);
        return ;
    }
    vector <int> diagonalSum(Node* root) {
     map <int,int> val;
     solve(root,val,0);
     
     vector<int> ans;
     
     for(auto m: val)
     {
         ans.push_back(m.second);
     }
     return ans;
    }
};