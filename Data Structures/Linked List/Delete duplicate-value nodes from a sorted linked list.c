

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    if(head == NULL) return NULL;
    SinglyLinkedListNode *tmp = head;
    while(tmp->next != NULL) {
        if(tmp->data == tmp->next->data) {
            SinglyLinkedListNode *node = tmp->next;
            tmp->next = tmp->next->next;
            free(node);
        } else {
            tmp = tmp->next;
        }
    }
    return head;
}

