class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* node = head;
        while(head && node->next != nullptr){
            if(node->val == node->next->val){
                ListNode* trash = node->next;
                node->next = node->next->next;
                delete trash;
            }
            else{
                node = node->next;
            }
        }
        return head;
    }
};
