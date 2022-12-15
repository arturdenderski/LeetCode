class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int aLen = 0;
        int bLen = 0;
        ListNode *tempA = headA;
        ListNode *tempB = headB;

        while(tempA != nullptr || tempB != nullptr)
        {
            if(tempA != nullptr)
            {
                aLen++; 
                tempA = tempA->next;
            }
    
            if(tempB != nullptr)
            {
                bLen++;
                tempB = tempB->next;
            }
        }

        ListNode *shortList = aLen > bLen ? headB : headA;
        ListNode *longList = aLen > bLen ? headA : headB;

        for(int i = 0; i < abs(aLen-bLen); i++)
        {
            longList = longList->next;
        }

        for(int i =0; i < aLen > bLen ? bLen : aLen ; i++)
        {
            if(longList == shortList)
            {
                return shortList;
            }
            longList = longList->next;
            shortList = shortList->next;
        }

        return nullptr;
    }
};