// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* node=new SinglyLinkedListNode(data);
    node->data=data;
    if(llist!=NULL){
        node->next=llist;
        llist=node;
    }
    llist=node;
    return llist;
}
