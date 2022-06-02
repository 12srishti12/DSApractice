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
        ListNode *temp;
        int s,c=0,count=1;
        temp=head;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        //cout<<c;
        s=(c/2)+1;
        //cout<<s;
        temp=head;
        while(count<s && temp!=NULL ){
            head=temp->next;
            temp=temp->next;
            count++;
        }
        
        return head;
    }
};
