void insertAtHead(doublyNode *&head, int val);
void insert_node_by_position(doublyNode *&head, int pos, int val);

/// Insert At Head
void insertAtHead(doublyNode *&head, int val) // here (*&head) keeps the address reference of &head from main, so if head is null we can change it from function scope
{
    doublyNode *newNode = new doublyNode(val);  // Step 1: newNode creation

    if(head != NULL) // Step 2 is not required if head is NULL
    {
        head->prev = newNode; // Step 2: Update of head->prev: Pointing Backwards of old head
    }
    newNode->next = head;   // Step 3: Update of newNode->next
    head = newNode; // Step 4: Update of head
}

/// Insertion At Specific Position
void insert_node_by_position(doublyNode *&head, int pos, int val)
{
    if(pos == 1)
    {
        insertAtHead(head, val);
        return;
    }

    int i=1;

    doublyNode *temp = head;
    while(i<pos-1)
    {
        temp = temp->next; // traversing
        i++;
    }

    doublyNode *newNode = new doublyNode(val);
    newNode->next = temp->next;
    // When this function will be called from "Insertion 'after' a specific value (Unique/Duplicate List)" we will receive a +1 position for 'after'
    // So if we have to insert after last node then the following if check is required to avoid temp->next->prev (cause temp->next = NULL, so there wont be any prev inside it)
    if(pos <= countLength(head))
    {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
