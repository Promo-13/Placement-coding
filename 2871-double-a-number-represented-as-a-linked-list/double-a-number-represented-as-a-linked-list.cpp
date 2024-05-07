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
    ListNode* doubleIt(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(curr != nullptr){
            int twice = curr->val * 2;
            if(twice < 10){
                curr->val = twice;
            }else if(prev != nullptr){
                curr->val = twice % 10;
                prev->val = prev->val + 1;
            }else{
                head = new ListNode(1,curr);
                curr->val = twice % 10;
            }
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};