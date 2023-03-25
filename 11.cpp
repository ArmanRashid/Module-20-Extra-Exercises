void insert_node()(Node *&head, int val) // Insert at tail
{
    Node *newNode = new Node(val);

    // Case 1 : If head == NULL, then newNode will be head
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    // Case 2 : If head != NULL, traverse and find the last Node
    Node *tmp = head;
    while(tmp->Next != NULL)
    {
        tmp = tmp->Next;
    }
    tmp->Next = newNode;
}
