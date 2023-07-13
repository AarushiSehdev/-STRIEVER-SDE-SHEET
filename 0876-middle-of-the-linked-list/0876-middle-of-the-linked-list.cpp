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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int fast=0;
        int slow=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            fast++;
        }
        cout<<fast;
        slow=(fast/2);
        ListNode* tmp=head;
        int cnt=0;
        while(cnt<slow)
        {
            tmp=tmp->next;
            cnt++;
        }
        return tmp;
        
        
    }
};