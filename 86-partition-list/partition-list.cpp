class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* LowerList = new ListNode(0);
        ListNode* UpperList = new ListNode(0);

        ListNode* TempLowerList = LowerList; 
        ListNode* TempUpperList = UpperList; 

        ListNode* temp = head;

        while (temp != NULL) {
            if (temp->val < x) {
                TempLowerList->next = temp;
                TempLowerList = TempLowerList->next;
            } else {
                TempUpperList->next = temp;
                TempUpperList = TempUpperList->next;
            }
            temp = temp->next;
        }

        TempUpperList->next = NULL;
        TempLowerList->next = UpperList->next;

        ListNode* PartitionedList = LowerList->next;

        delete LowerList;
        delete UpperList;

        return PartitionedList;
    }
};
