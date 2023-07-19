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
   /* int getlen(ListNode* head)
    {
        int len=0;
        ListNode* temp=head;
        if(head==NULL)
        {
            return NULL;
        }
        else
        {
            while(temp!=NULL)
            {
                len++;
                temp=temp->next;
            }
        }
        return len;
    }
    */
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        if(head->next==NULL|| k==0) return head;
        int len=0;
        ListNode* temp=head;
        while(temp->next!=NULL)
        {
            len++;
            temp=temp->next;
        }
        temp->next=head;
        len=len+1;
      
        //cout<<len;
        
        k=k%len;
        k=len-k;
        while(k--)
            temp=temp->next;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};