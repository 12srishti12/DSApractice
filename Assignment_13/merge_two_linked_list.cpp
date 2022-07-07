class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        ListNode *cur,*head;
        if(head1==NULL && head2==NULL) return head1;
        if(head2==NULL) return head1;
        if(head1==NULL) return head2;
        if(head1->val < head2->val){
            cur=head1;
            head=cur;
            head1=head1->next;
        }
        else if(head2->val <= head1->val){
            cur=head2;
            head=cur;
            head2=head2->next;
        }
       while(head1!=NULL && head2!=NULL){
           if(head1->val < head2->val){
              cur->next=head1;
              head1=head1->next;
              cur=cur->next;
           }
           else{
               cur->next=head2;
               head2=head2->next;
               cur=cur->next;
           }
       }
        if(head1){
            cur->next=head1;
        }
        if(head2){
            cur->next=head2;
        }
        return head;
        
    }    
                    
};
