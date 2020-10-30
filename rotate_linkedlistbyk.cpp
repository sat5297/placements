Node* rotate(Node* head, int k) {
    // Your code here
    Node* curr=head;
    while(curr->next != NULL)
        curr = curr->next;
    curr->next = head;
    
    curr = head;
    k-=1;
    for(int i = 0; i < k; i++)
        curr = curr->next;
    Node* ans = curr->next;
    curr->next = NULL;
    return ans;
}
