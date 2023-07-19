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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        ListNode * dummy=new ListNode();
        ListNode* temp=dummy;
        if(head1==NULL) return head2;
        if(head2==NULL) return head1;
        if(head1==NULL && head2==NULL) return NULL;
        
        while(head1!=NULL && head2!=NULL)
        {
            if(head1->val<=head2->val)
            {
                temp->next=head1;
                head1=head1->next;
            }
            else
            {
                temp->next=head2;
                head2=head2->next;
            }
            temp=temp->next;
        }
        if(head1!=NULL)
        {
            temp->next=head1;
        }
       else
       {
            temp->next=head2;
            
        }
        
        ListNode* res=dummy->next;
        return(res);
    }
};
