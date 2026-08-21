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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* curr = &dummy;
        ListNode* i = list1;
        ListNode* j = list2;
        while(i && j){
            if(i->val < j->val){
                curr->next = i;
                curr = curr->next;
                i = i->next;
            }else{
                curr->next = j;
                curr = curr->next;
                j = j->next;
            }
        }
        curr->next = i ? i : j;
        return dummy.next;

    }
};
