// Code

// Definition for a binary tree node.
/*
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
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
