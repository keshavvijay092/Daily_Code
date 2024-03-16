class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       Node* fast = del_node;
       Node* slow = fast->next;
       while(slow)
       {
           fast->data = slow->data;
              if(fast->next->next == NULL)
         {
             fast->next = NULL;
             break;
         }
           fast = slow;
           slow = slow->next;
       }
      return ;
    }

};
