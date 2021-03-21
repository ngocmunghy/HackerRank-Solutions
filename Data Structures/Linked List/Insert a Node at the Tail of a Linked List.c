

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *tmp = create_singly_linked_list_node(data);
    if (head == NULL) {
        return tmp;
    }
    else {   
        SinglyLinkedListNode* tmp1=head;
        while (tmp1->next!=NULL) {
            tmp1 = tmp1->next;
        }
        tmp1->next = tmp; 
        return head;
    }
}

