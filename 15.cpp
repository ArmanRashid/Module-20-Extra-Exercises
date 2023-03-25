void *move_tail(Node *&head)
{
    if(head == NULL)
    {
        cout<<"There is no Node in the list yet"<<endl;
        return 0;
    }
    if(head->Next == NULL)
    {
        cout<<"Only one Node in the List"<<endl;
        return 0;
    }

    Node *temp = head;
    while(temp->Next->Next != NULL)
    {
        temp = temp->Next;
    }
    Node *moveNode = temp->Next;
    temp->Next = NULL;
    moveNode->Next = head;
    head = moveNode;
}
