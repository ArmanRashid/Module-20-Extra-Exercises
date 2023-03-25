void deletionAtHead(doublyNode *&head)
void deletionAtTail(doublyNode *&head);
void delete_node_by_position(doublyNode *&head, int position); // Task

/// Deletion at head
void deletionAtHead(doublyNode *&head)
{
    doublyNode *temp = head;
    if(temp != NULL)
    {
        head = temp->next;
        if(head != NULL) // If there is only one Node then this logic should not apply
        {
            head->prev = NULL;
        }
        delete temp;
    }
    else
    {
        cout<<"There is no Value in the Linked List"<<endl;
    }
}

/// Deletion at tail
void deletionAtTail(doublyNode *&head)
{
    doublyNode *temp = head;

    if(temp != NULL && temp->next != NULL)
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        doublyNode *delNode = temp->next; // You can "delete temp->next" here without storing it at delNode
        temp->next = NULL;
        delete delNode;
    }

    else
    {
        // Head is NULL
        if(temp == NULL)
        {
            cout<<"There is no Node in the Linked List"<<endl;
        }
        // Head is Tail : If there is only one Node (temp->Next == NULL)
        else
        {
            // head = NULL;
            deletionAtHead(head); // Same thing
        }
    }
}

/// Task: Deletion At Specific Position
void delete_node_by_position(doublyNode *&head, int position)
{
    doublyNode *temp = head;
    if(position >= 1 && position <= countLength(head)) // If position is in range of Linked List length
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
                temp = temp->next;
                i++;
            }

            doublyNode *delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
        }
    }
    else // Position is Out Of Range
    {
        cout<< "Position Out of Bound/Range" <<endl;
    }
}
