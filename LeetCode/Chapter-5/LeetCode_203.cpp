class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        ListNode* front = new ListNode(0);
        front->next = head;
        ListNode* curr = front;

        while(curr->next != nullptr){
            if(curr->next->val == val){
                ListNode* trash = curr->next;
                curr->next = curr->next->next;
                delete trash;
            }
            else curr= curr->next;
        }
    return front->next;
    }
};
