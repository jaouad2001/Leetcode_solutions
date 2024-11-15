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
    ListNode* middleNode(ListNode* head) {
       
        int count = 0;
       
        ListNode* c = head;
       
        while(c != NULL)
        {
            count++;
            c = c->next;
        }
       
        c = head;
       
        count /= 2;
        count++;
       
        for(int i = 1; i < count; i++) c = c->next;
       
        return c;
    }
};
