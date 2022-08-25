class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        unordered_set<ListNode*>A;
        while(headA!=NULL){
            A.insert(headA);
            headA=headA->next;
        }
        while(headB!=NULL){
            if(A.find(headB)!=A.end()) return headB;
            headB=headB->next;
        }
        return NULL;
        
    }
};


https://leetcode.com/submissions/detail/783262489/
