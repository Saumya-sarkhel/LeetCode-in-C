
typedef struct ListNode node;
node* removeElements(const node* head, const int val) {
    node* temp = malloc(sizeof(node));
    temp->next = head;
    node *curr = temp;
    while (curr->next != NULL)
        if (curr->next->val == val)
            curr->next = curr->next->next;
        else
            curr = curr->next;

    return temp->next;
}
