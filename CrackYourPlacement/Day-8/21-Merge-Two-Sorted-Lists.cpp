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
        ListNode *curr1, *curr2, *prev, *head;
        curr1 = list1;
        curr2 = list2;
        head = new ListNode();
        prev = head;
        
        while(curr1 && curr2){
            if(curr1->val <= curr2->val){
                prev->next = curr1;
                prev = prev->next;
                curr1 = curr1->next;
            }
            else{
                prev->next = curr2;
                prev = prev->next;
                curr2 = curr2->next;
            }
        }
        
        if(curr1){
            prev->next = curr1;
        }
        else{
            prev->next = curr2;
        }
        return head->next;
    }
};