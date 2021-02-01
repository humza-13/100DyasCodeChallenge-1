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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL){return NULL;}
        else if(l1==NULL && l2){return l2;}
        else if(l1 && l2 == NULL){return l1;}
        
        ListNode* head = new ListNode();
        ListNode* ptr = head;
        
        while(l1 && l2){
            
            if(l1-> val < l2-> val){
                ptr-> next = l1;
                l1 = l1-> next;
            }
            else{
                ptr-> next = l2;
                l2 = l2-> next;
            }
            ptr = ptr-> next;
            
        }
        
        if(l1)
            ptr-> next = l1;
        if(l2)
            ptr->next = l2;
        
        ptr = head-> next;
        delete(head);
        return ptr;
    }
};
