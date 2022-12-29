class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int overTen = 0;
        ListNode* res = new ListNode();
        ListNode* resHead = res;

        while(l1 || l2 || overTen)
        {
            if(l1 && l2)
            {
                res->val = (l1->val + l2->val + overTen) % 10;
                overTen = (l1->val + l2->val + overTen) / 10;
                if(l1->next || l2->next || overTen)
                    res->next = new ListNode();
                res = res->next;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l1)
            {
                res->val = (l1->val + overTen) % 10;
                overTen = (l1->val + overTen) / 10;
                if(l1->next || overTen)
                    res->next = new ListNode();
                res = res->next;
                l1 = l1->next;
            }
            else if(l2)
            {
                res->val = (l2->val + overTen) % 10;
                overTen = (l2->val + overTen) / 10;
                if(l2->next || overTen)
                    res->next = new ListNode();
                res = res->next;
                l2 = l2->next;
            }
            else{
                res->val = 1;
                overTen = 0;
            }
            
        }
        return resHead;
    }
};