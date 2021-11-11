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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;

        auto it1 = head;
        auto it2 = head->next;
        
        while(it1 && it2){
            
            if(it1->val == it2->val){
                it1->next = it2->next;
                it2 = it2->next;
            }else
                it1 = it1->next;
            
        }
        
        return head;
                    
    }
};
