

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *tmp = create_singly_linked_list_node(data);
    if (head == NULL) {
        return tmp;
    }
    else {
        SinglyLinkedListNode* tmp1 = head;
        int i;
        for(i=0;i<position-1;i++) {
            tmp1 = tmp1->next;
        }
        tmp->next = tmp1->next;
        tmp1->next = tmp;
        return head;
    }
}

