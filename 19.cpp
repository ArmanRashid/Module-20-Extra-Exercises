void move_head(Node *&head)
{
    if(head == NULL)
    {
        cout<<"There is no Node in the list yet"<<endl;
        return;
    }
    if(head->Next == NULL)
    {
        cout<<"Only one Node in the List"<<endl;
        return;
    }

    Node *temp = head;
    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }
    Node *moveNode = head;
    head = head->Next;
    temp->Next = moveNode;
    moveNode->Next = NULL;
}
