/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;

        Node* curr = head;
         // Creating copy of nodes
         while(curr) {
            Node* copy = new Node(curr->val);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
         }

         //Setting random ptrs
         curr = head;
         while(curr) {
            if(curr->random){
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
         }

         // Separating lists
         curr = head;
         Node* dummy = new Node(0);
         Node* copyCurr = dummy;

         while(curr) {
            Node* copy = curr->next;
            curr->next = copy->next;
            copyCurr->next = copy;

            copyCurr = copyCurr->next;
            curr = curr->next;
         }
         return dummy->next;
    }
};

