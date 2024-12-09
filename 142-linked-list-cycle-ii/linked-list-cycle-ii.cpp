/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        int index = 0;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                //cycle to detect ho gayi ab starting point nikalana he 
                ListNode* temp=head;
                while(temp!=slow){//ye thoda yad rakhne wali chiz he like jab slow ko aage badate he he aur ek temp pointer lete he jo head se start ho to dono cycle ke start pr hi milte he
                    temp=temp->next;
                    slow=slow->next;
                }
                return temp;
            }
        }
        return NULL;
    }
};