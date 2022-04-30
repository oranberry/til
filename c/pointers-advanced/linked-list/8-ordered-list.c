// 💫 Ordered Lists
// When the nodes of a list are kept in order — sorted by the data stored inside the nodes
// — we say that the list is ordered.

// Inserting a node into an ordered list is more difficult,
// because the node won’t always be put at the beginning of the list or the end of the list.
// However, searching is faster: we can stop looking after reaching the point
// at which the desired node would have been located.

// The part structure contains a pointer to the next node:
struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
    struct part *next;
};

// inventory will point to the first node in the list:
struct part *inventory = NULL;

// We must determine where the new part belongs in the list and insert it there.
// It will also check whether the part number is already present in the list.
// A loop that accomplishes both tasks:
for (cur = inventory, prev = NULL; cur != NULL && new_node->number > cur->number; prev = cur, cur = cur->next)
    ;

// Once the loop terminates, insert will check
// whether cur isn’t NULL and whether new_node->number equals cur->number.
// If both are true, the part number is already in the list.
// Otherwise, insert will insert a new node between the nodes pointed to by prev and cur.
// This strategy works even if the new part number is larger than any in the list.

/**********************************************************
 * insert: Prompts the user for information about a new   *
 *         part and then inserts the part into the        *
 *         inventory list; the list remains sorted by     *
 *         part number. Prints an error message and       *
 *         returns prematurely if the part already exists *
 *         or space could not be allocated for the part.  *
 **********************************************************/
struct part *insert(struct part *inventory)
{
    struct part *cur, *prev, *new_node;

    new_node = malloc(sizeof(struct part));
    if (new_node == NULL)
    {
        printf("Database is full; can't add more parts.\n");
        return inventory;
    }

    printf("Enter part number: ");
    scanf("%d", &new_node->number);

    for (cur = inventory, prev = NULL; cur != NULL && new_node->number > cur->number; prev = cur, cur = cur->next)
        ;
    if (cur != NULL && new_node->number == cur->number)
    {
        printf("Part already exists.\n");
        free(new_node);
        return inventory;
    }

    printf("Enter part name: ");
    read_line(new_node->name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &new_node->on_hand);

    new_node->next = cur;
    if (prev == NULL)
        return new_node;
    else
    {
        prev->next = new_node;
        return inventory;
    }
}

// Does it work if the new part number is larger than all parts in the list?
// Yes. cur will be NULL. new_node will become the new last node.
new_node->next = cur;
if (prev == NULL)
    return new_node;
else
{
    prev->next = new_node;
    return inventory;
}

// Searching in an Ordered list
// Searching is faster: stop looking after reaching the point at which the desired node would have been located.
struct part *find_part(struct part *inventory, int number)
{
    struct part *p;

    for (p = inventory; p != NULL && number > p->number; p = p->next)
        ;
    if (p != NULL && number == p->number)
        return p;
    return NULL;
}