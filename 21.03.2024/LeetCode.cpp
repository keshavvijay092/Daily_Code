class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<vector<int>> traversal;
    	
    	queue<Node*> qt;
    	qt.push(root);
    
    	while(!qt.empty())
    	{
    	    	vector <int> level;
    	   
    	    int n =qt.size();
    	    for(int i=0;i<n;i++)
    	    {
    	         Node* element = qt.front();
    	         qt.pop();
    	         level.push_back(element->data);
    	    
    	     if(element->left)
    	    {
    	        qt.push(element->left);
    	    }
    	    if(element->right)
    	    {
    	        qt.push(element->right);
    	    }
    	    }
    
    	    
    	    traversal.push_back(level);
    	 
    	}
    	
    	vector<int> ans;
    	
    	for(int i=0;i<traversal.size();i++)
    	{
    	    if(i%2 == 1)
    	    {
    	        reverse(traversal[i].begin(),traversal[i].end());
    	    }
    
         for(auto m:traversal[i] )
         {
             ans.push_back(m);
         }
    	    
    	}
    	
    	
    	
    	return ans;
    }
};