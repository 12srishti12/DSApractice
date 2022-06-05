class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       ListNode *temp,*prev,*temp1;
        temp=head;
        //int pos=1;
        while(temp!=NULL){
            if(temp->val==val && temp==head){
                prev=temp;
                temp=temp->next;
                head=temp;
                delete prev;
                //pos++;
            }
            else if(temp->val!=val){
                prev=temp;
                temp=temp->next;
                //pos++;
            } 
            else {
                if(temp->next!=NULL){
                    prev->next=temp->next;
                    temp1=temp;
                    temp=temp->next;
                    delete temp1;
                }
                else{
                    temp1=temp;
                    delete temp1;
                    prev->next=NULL;
                    temp=prev;
                }
           }
            }
            
      return head; 
    }
};
