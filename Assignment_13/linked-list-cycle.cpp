 bool hasCycle(ListNode *head) {
        ListNode *slow,*fast;
        slow=head;
        //fast=head->next->next;
        if(head==NULL) return 0;
        else if(head->next==NULL) return 0;
        else if(head->next->next==NULL) return 0;
        fast=head->next->next;
        while(slow!=fast){
                slow=slow->next;
                if(fast->next==NULL){
                    return 0;
                    break;
                }
                fast=fast->next->next;
                if(fast==NULL){
                    return 0;
                    break;
                }
            
        }
        return 1;
    }
};

link=https://leetcode.com/submissions/detail/717458447/
