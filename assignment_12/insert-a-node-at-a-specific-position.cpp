/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* newnode=new SinglyLinkedListNode(data);
    SinglyLinkedListNode* prev,*after;
    newnode->data=data;
    if(llist==NULL){
        llist=newnode;
    }
    int i=1;
    prev=llist;
    while(i<position){
       prev=prev->next; 
       i++;
    }
     after=prev->next;
     prev->next=newnode;
     newnode->next=after;
     return llist;       
}
