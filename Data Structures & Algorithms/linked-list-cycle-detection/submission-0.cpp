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
        std::unordered_set<ListNode*> visited_nodes; 
        ListNode* current = head; 

        while(current){
            if(visited_nodes.find(current) == visited_nodes.end()){
                // they are not in the map
                visited_nodes.insert(current);
                current = current->next; 
            }
            else{
                // they are in the map
                return true; 
            }
        }
        return false; 
    }
};
