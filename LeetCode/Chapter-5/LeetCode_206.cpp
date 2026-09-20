class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* node = nullptr;
        ListNode* curr = head;

        while(head!= nullptr){
            curr = head->next;
            head->next = node;
            node = head;
            head = curr;
        }
    return node;
    }
};
