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
    bool hasCycle(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp1 = head;
        while(temp!=NULL && temp->next!=NULL){
            temp1=temp1->next;
            temp=temp->next->next;
            if(temp==temp1){
                return true;
            }
        }
        return false;

    }
};
