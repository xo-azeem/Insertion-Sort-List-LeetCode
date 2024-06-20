// Code

// Definition for singly-linked list.
/*
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
*/

class Solution 
{
public:
    ListNode* insertionSortList(ListNode* head) 
    {
        if (!head) 
            return head;
        
        ListNode dummy(0);
        dummy.next = head;
        ListNode* current = head;
        
        while (current && current->next) 
        {
            if (current->val <= current->next->val)
                current = current->next;
            
            else 
            {
                ListNode* toInsert = current->next;
                current->next = toInsert->next;
            
                ListNode* prev = &dummy;

                while (prev->next->val < toInsert->val)
                    prev = prev->next;
                
                toInsert->next = prev->next;
                prev->next = toInsert;
            }
        }
        
        return dummy.next;
    }
};
