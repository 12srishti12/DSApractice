ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp;
        temp=head;
        while(temp!=NULL){
            cout<<" temp->val "<<temp->val;
            while(temp->next!=NULL && temp->val==temp->next->val){
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }
        
        return head;
    }
};


https://leetcode.com/submissions/detail/725699848/
