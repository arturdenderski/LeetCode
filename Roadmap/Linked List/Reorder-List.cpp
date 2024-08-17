class Solution {
public:
    void reorderList(ListNode* head) {
        std::vector<ListNode*> v_list;

        ListNode* a = head;
        while(a)
        {
            v_list.push_back(a);
            a = a->next;
        }

        size_t i = 0;
        size_t j = v_list.size() - 1;
        
        while(i<j)
        {
            v_list[i]->next = v_list[j];
            i++;
            v_list[j]->next = v_list[i];
            j--;
        }

        v_list[i]->next = nullptr;
    }
};