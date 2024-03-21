class Solution {
public:
ListNode* reversebyrecursion(ListNode *prev,ListNode *curr,ListNode*head)
{
//   base case
if(curr==NULL)
{
    return prev;
}
ListNode* next =curr->next;
curr->next = prev;
prev = curr;
curr = next;
head = prev;
return reversebyrecursion(prev,curr,head);

}
    ListNode* reverseList(ListNode* head) {
     ListNode* prev = NULL;
     ListNode* temp = head;
     ListNode* curr = temp;
    // return reversebyrecursion(prev,curr,head);
     while(temp)
     {
        curr = curr->next;
        temp->next = prev;
         prev = temp;
         temp = curr;
         head = prev;
     }
     return prev;
    }
};