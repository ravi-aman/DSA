/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // is tarike me ye dikkat he ki k bada ho jata he agr k chota ho to sbse
        // sahi tarika yahi hoga rotate krne ka kuki ek hi traversal me answer
        // aa jata he

        if (!head || !head->next || k == 0) {
            // agr list khali h ya ek hi node h ya k zero h to return kro
            return head;
        }

        // so is trike se krne ke lie k nikala hi hoga to chlo nikaleeeeeee
        int lenght = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            temp = temp->next;
            lenght++;
        }
        // k ko chota krte he agr vo length se bada he to
        k = k % lenght;

        if (k == 0) {
            // agr k 0 h to return kro kyunki rotation ka koi fayda nhi
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        // fast pointer ko k step badate he
        for (int i = 0; i < k; i++) {
            fast = fast->next;
        }

        // fast and slow ko ab sath me lekr jayenge jab tk fast end tk nhi pauch
        // jata isse slow k posistion pr pauch jayega
        while (fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        fast->next = head; // end node ya fast pointer ko head se connect kr dia
        head = slow->next; // slow ko naya head bana dia
        slow->next = NULL; // list ko k position se tod dia
        // le apni nayi list readyyyyyyyyyyyyyyyyyyyyyyyyyyy :)
        return head;
    }
};
