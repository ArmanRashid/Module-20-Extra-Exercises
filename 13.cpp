void deletionAtHead(Node *&head);
void deletionAtTail(Node *&head);
void delete_node_by_position(Node *&head, int position); // Task

void deletionAtHead(Node *&head)
{
    Node *temp = head;
    if(temp != NULL)
    {
        head = temp->Next;
        delete temp;
    }
    else
    {
        cout<<"There is no Value in the Linked List"<<endl;
    }
}

void deletionAtTail(Node *&head)
{
    Node *temp = head;

    if(temp != NULL && temp->Next != NULL)
    {
        while(temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }
        Node *delNode = temp->Next; // You can "delete temp->Next" here without storing it at delNode
        temp->Next = NULL;
        delete delNode;
    }

    else
    {
        // Head is NULL
        if(temp == NULL)
        {
            cout<<"There is no Value in the Linked List"<<endl;
        }
        // Head is Tail : If there is only one Node (temp->Next == NULL)
        else
        {
            // head = NULL;
            deletionAtHead(head); // Same thing
        }
    }
}

// Task
void delete_node_by_position(Node *&head, int position)
{
    Node *temp = head;
    if(position <= countLength(head)) // If position is in range of Linked List length
    {
        if(position == 1) // if position is first Node
        {
            deletionAtHead(head);
        }
        else if(position == countLength(head)) // if position is last Node (This check is not necessary, next logic does the job)
        {
            deletionAtTail(head);
        }
        else
        {
            int i=1;
            while(i < position-1)
            {
                temp = temp->Next;
                i++;
            }

            Node *delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }
    }
    else // Position is Out Of Range
    {
        cout<< "Position Out of Bound/Range" <<endl;
    }
}
