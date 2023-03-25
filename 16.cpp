/// Insert At Tail
void insert_node(doublyNode *&head, int val)
{
    doublyNode *newNode = new doublyNode(val);

    // Case 1 : If head == NULL, then newNode will be head
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    // Case 2 : If head != NULL, traverse and find the last doublyNode
    doublyNode *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp; // Although our last doublyNode points to the newly inserted doublyNode, still the new doublyNode does not point backward as it's prev is NULL
}
