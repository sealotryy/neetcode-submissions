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
        // dummy node to attach nodes onto 
        // think of it as an actual box/node sitting somewhere in memory
        // & means to get the address of dummy
        // current stores the address of dummy
        // we do this so we can move through the list without moving dummy
        ListNode dummy(0);
        ListNode* current = &dummy; 


        while (list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val){
                // make the next thing current points to as list1
                // list1 is only the address of the first node, not the entire list
                current->next = list1;
                current = list1; 
                list1 = list1->next; 
            }
            else{
                current->next = list2; 
                current = list2; 
                list2 = list2->next; 
            }
        }
        current->next = list1 ? list1 : list2;
        return dummy.next; 
    }
};
