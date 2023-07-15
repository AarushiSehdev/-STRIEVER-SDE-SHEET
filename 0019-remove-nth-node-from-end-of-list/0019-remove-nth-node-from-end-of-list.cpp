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
    int getlength(ListNode* &head)
    {
        int len=0;
        ListNode* tmp=head;
        while(tmp!=NULL)
        {
            tmp=tmp->next;
            len++;

        }
        return len;

    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int length = getlength(head);
    int move = length - n;

    if (move == 0) {
        // Remove the first element
        ListNode* toDelete = head;
        head = head->next;
        delete toDelete;
    } else {
        int counter = 0;
        ListNode* temp = head;

        // Move temp to the node before the one to be deleted
        while (counter < move -1) {
            
            temp = temp->next;
            counter++;
            
        }

        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    return head;
}

};