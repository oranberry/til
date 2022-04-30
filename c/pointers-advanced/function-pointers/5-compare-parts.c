// Const Pointers as Function Parameters
// The compare function passed to qsort must be declared with two const void *parameters.
// int (*compar)(const void *, const void *);

// qsort will call the function when it needs to compare array entries.
// - qsort will pass the addresses of array elements to be compared.
// - Compare function must typecast the arguments as pointers to whatever type is in the array.
// - Must not use the pointers to modify anything.
// - Returns an int with the result of the comparison.

// When qsort is called, it sorts the array into ascending order,
// calling the comparison function whenever it needs to compare array elements.
// A call of qsort that sorts the inventory array :
qsort(inventory, num_parts, sizeof(struct part), compare_parts);

// compare_parts is a function that compares two part structures.
// Writing the compare_parts function is tricky.
// qsort requires that its parameters have type void *,
// but we can’t access the members of a part structure through a void *pointer.
// To solve the problem, compare_parts will assign its parameters, p and q,
// to variables of type struct part *.

// A version of compare_parts that can be used to sort the inventory array
// into ascending order by part number:
int compare_parts(const void *p, const void *q)
{
    const struct part *p1 = p;
    const struct part *q1 = q;

    if (p1->number < q1->number)
        return -1;
    else if (p1->number == q1->number)
        return 0;
    else
        return 1;
}
// Most C programmers would write the function more concisely:
int compare_parts(const void *p, const void *q)
{
    if (((struct part *)p)->number <
        ((struct part *)q)->number)
        return -1;
    else if (((struct part *)p)->number ==
             ((struct part *)q)->number)
        return 0;
    else
        return 1;
}
