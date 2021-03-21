

void printLinkedList(SinglyLinkedListNode *head) {
    if (head == NULL) {
        printf("There are not any nodes there!");
        return;
    }
    else {
        SinglyLinkedListNode *tmp = head;
        while(tmp!= NULL) {
            printf("%d\n",tmp->data);
            tmp = tmp->next;
        }
    }
    return;
}

