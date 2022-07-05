class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev,*cur,*s;
        prev=NULL;
        cur=head;
        while(cur!=NULL){
            s=cur->next;
            cur->next=prev;
            prev=cur;
            cur=s;
        }
        head=prev;
        return prev;
    }

};


https://leetcode.com/submissions/detail/739182296/
