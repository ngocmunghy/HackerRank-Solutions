

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* tmp = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    tmp = head;
    if(head == NULL) 
        return NULL;
    else if(position == 0) {
       SinglyLinkedListNode *tmp1 = head;
       tmp = tmp->next;
       head = tmp;
       free(tmp1);
       return head;
    }
    else {
        int i=0;
        while(i <= position-2) {
            tmp = tmp->next;
            i++;
        }
        SinglyLinkedListNode *tmp1 = tmp->next;
        tmp->next = tmp1->next;
        free(tmp1);
    }
    return head;
}

