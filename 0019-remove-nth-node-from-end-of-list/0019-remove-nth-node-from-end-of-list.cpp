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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(head->next==NULL){
            return NULL;
        }
        ListNode* temp=head;
        int count=1;

        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }

        if(count==n){
             head=head->next;
             return head;
        }
        temp=head;
        ListNode* prevtemp;
        int lastcount=0;
        while(lastcount!=count-n){
            prevtemp=temp;
            temp=temp->next;
            lastcount++;
        }

        prevtemp->next=temp->next;


        return head;
        
    }
};