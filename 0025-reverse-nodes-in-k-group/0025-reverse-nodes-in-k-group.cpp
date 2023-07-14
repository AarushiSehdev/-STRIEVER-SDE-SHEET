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
    int length (ListNode* head)
    {
        int len = 0;
        while(head != NULL)
        {
            len++;
            head = head -> next;
        }
        return len;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        
        //head = 1

        int len = length(head); //Calculate length of LL
        if(len < k) //As mentioned in aue, if len < k don't reverse
        {
            return head;
        }
        int cnt = 0;
        ListNode* curr = head; //1 --- After 1st step, curr = 2
        ListNode* prev = NULL; //NULL
        ListNode* forward = NULL;

        while(curr != NULL && cnt < k)  //Reverseing 'k' nodes initially
        {
            forward = curr -> next; //2 --- 3
            curr -> next = prev; //1 -> 2 is broken and NULL <- 1 --- 2 -> 1
            prev = curr; //prev = 1 --- prev = 2
            curr = forward; // curr = 2 --- curr = 3
            cnt++;
        }
        if(forward != NULL)
        {
            head -> next = reverseKGroup(forward, k); //Recursively calling for remaining nodes
        }
        //I've stored it in head -> next bcz, head = 1 and I've coneected it with 4, head of the new LL

        return prev; // return prev bcz, 2 is the head of our final LL and it is stored in prev
    }
};