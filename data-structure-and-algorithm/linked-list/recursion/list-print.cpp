struct node
{
    int data;
    struct node *next;
};

void list_print(struct node *list)
{
    if (list != NULL)
    {
        printf("%d ", list->data);
        list_print(list->next);
    }
}
