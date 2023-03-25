int count_node(Node *&head)
{
    int node_count = 0;
    Node *temp = head;

    while(temp != NULL)
    {
        node_count++;
        temp = temp->Next;
    }

    return node_count;

}
