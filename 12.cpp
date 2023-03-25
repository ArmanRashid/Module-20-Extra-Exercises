void insert_node_by_position(Node *&head, int pos, int val)
{
    int i=0; // we can start from 1 also, for better understanding, while(i<pos-1)

    Node *temp = head;
    while(i<pos-2)
    {
        temp = temp->Next; // traversing
        i++;
    }

    Node *newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}
