class Solution {
public:
ListNode*reverse(ListNode* head)
{
    // reverse kar de ll ko 
    ListNode* prev = NULL;
    ListNode* curr = head;
    while(curr)
    {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void reorderList(ListNode* head) {
      if (!head || !head->next) {
            return;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next)
        {  
          fast = fast->next->next;
          slow  =slow->next;
        }
          ListNode* head2 = reverse(slow);    
         ListNode* head1 = head;
        
         while(head2->next)
         {
          ListNode* temp = head1->next;
            head1->next = head2;
            head1 = temp;

            temp = head2->next;
            head2->next = head1;
            head2 = temp;
         }
    }
};
