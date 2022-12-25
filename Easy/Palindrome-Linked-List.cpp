class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* tempHead = head;

        while(tempHead != nullptr)
        {
            s.push(tempHead->val);
            tempHead = tempHead->next;
        }

        while(head != nullptr)
        {
            if(head->val != s.top())
                return false;

            s.pop();
            head = head->next;
        }
        
        return true;
    }
};