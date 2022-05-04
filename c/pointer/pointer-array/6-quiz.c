int a[] = {6, 19, 35, 74, 23, 16};
int *p = &a[1];
int *q = &a[5];

// What's the value of *(p+3)?
// 23

// What's the value of *(q-3)?
// 35

// What's the value of q - p?
// 4

// What's the value of *q - *p?
// -3

// What is the value of the condition p < q?
// 1 (true)

// What is the value of the condition *p < *q?
// 0 (false)
