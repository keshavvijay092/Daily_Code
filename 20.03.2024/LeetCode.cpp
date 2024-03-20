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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
       int cnt = 0;
       ListNode* slow = NULL;
       ListNode* first = NULL;
       ListNode* fast = NULL;
        while(temp1)
        {
            slow = temp1;
            temp1 = temp1->next;
            cnt++;
            if(cnt ==a)
            {
             first = slow;
            }
            if(cnt == b+1)
            {
             fast = temp1;
            }
        }
       first->next = list2;
       while(temp2)
       {
       temp2= temp2->next;
      if(temp2->next == NULL)
      {
        temp2->next = fast;
        break;
      }
     
       }
        return list1;
        }
};