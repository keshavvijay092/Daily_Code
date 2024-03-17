class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        unordered_set<int> fast;
        Node* temp = head1;
        while(temp)
        {
            int val = temp->data;
            fast.insert(val);
            temp = temp->next;
        }
        int cnt = 0;
        temp = head2;
        while(temp)
        {
            int val = temp->data;
            if(fast.find(x-val) !=fast.end())
            {
                cnt++;
            }
            temp=temp->next;
        }
        
        return cnt;
        
    }
};