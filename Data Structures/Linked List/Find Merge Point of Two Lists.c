

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *curA = head1;
    SinglyLinkedListNode *curB = head2;
    
    while(curA != curB) { // loop until curA == curB
        curA = curA->next;
        if(curA == NULL) {
            curA = head1;
            curB = curB->next;
        }    
    }
    
    return curA->data;
}

