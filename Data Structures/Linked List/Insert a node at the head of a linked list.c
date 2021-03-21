

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
SinglyLinkedListNode *insertNodeAtHead(SinglyLinkedListNode *head,int data) {
    SinglyLinkedListNode *tmp = create_singly_linked_list_node(data);

    if (head == NULL) {
        return tmp;
    }
    else {
        tmp->next = head;
        head = tmp;
        return tmp;
    }
}

