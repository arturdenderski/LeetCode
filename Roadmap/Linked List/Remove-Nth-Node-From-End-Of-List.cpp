class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* a = head;
        int list_size = 0;
        while (a) {
            list_size++;
            a = a->next;
        }

        if(list_size == n)
        {
            ListNode* res = head->next;
            delete head;
            return res;
        }

        a = head;

        for(int i = 0; i < list_size - n - 1; ++i)
        {
            a = a->next;
        }

        ListNode* node_to_remove = a->next;
        a->next = node_to_remove->next;
        delete node_to_remove;

        return head;
    }
};