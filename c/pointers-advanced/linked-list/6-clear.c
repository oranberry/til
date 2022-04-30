// 💫 Clear the List
// Before the program terminates, we should release the memory
// that was occupied by the nodes in the linked list.
void clear_list(struct node *list)
{
    struct node *p;
    while (list != NULL)
    {
        p = list;
        list = list->next;
        if (p != NULL)
            free(p);
    }
}

// What’s wrong with the following function?
void clear_list(struct node *list)
{
    struct node *p;
    for (p = list; p != NULL; p = p->next)
        free(p);
}
// Memory Leak and Dangling Pointer Problem!!