/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:


    ListNode* Middle(ListNode* head)
    {
        ListNode* fast= head;
        ListNode* slow = fast;
        while(fast->next != NULL && fast->next->next !=NULL)
       {
           fast = fast->next->next;
           slow = slow->next;
        }
        return slow;
    }

    ListNode* reverse(ListNode* head2)
    {
        ListNode* curr = head2;
        ListNode* prev = NULL;
        while(curr!=NULL)
        {
            ListNode* next = curr->next;
            curr->next = prev;
              prev= curr;
            curr = next;
            head2 = prev;
        }
        return prev;
    }
    bool check(ListNode* head,ListNode* head2)
    {
      
        while(head2!=NULL)
        {
       if(head->val == head2->val)
        {
            head = head->next;
            head2 = head2->next;
        }
        else
        {
            return false;
        }
        }
      
        return true;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* middleNode = Middle(head);
        ListNode* head2 = middleNode->next;
        head2 = reverse(head2);
      bool ans = check(head,head2);
      return ans;
    }
};