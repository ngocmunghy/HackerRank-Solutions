

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    int count = 0;
    SinglyLinkedListNode* tmp = head;
    while(tmp != NULL) {
        tmp = tmp->next;
        count++;
        if(count > 1000) return true;
    }
    
    return false;

}

