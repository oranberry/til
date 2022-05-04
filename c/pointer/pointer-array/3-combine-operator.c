// 💫 Combining the * and ++ Operators
// C programmers often combine the * (indirection) and ++ operators.
// A statement that modifies an array element and then advances to the next element:
a[i++] = j;

// If p is pointing to an array element:
p = &a[i];
*p++ = j;
// Because the postfix version of ++ takes precedence over *
*(p++) = j; // ❌❌❌ (*p)++ = j ❌❌❌

// *p++ or *(p++)
// Value of expression is *p before increment; increment p later

// (*p)++
// Value of expression is *p before increment; increment *p later

// *++p or *(++p)
// Increment p first; value of expression is *p after increment

// ++*p or ++(*p)
// Increment *p first; value of expression is *p after increment

// To sum the elements of the array a:
for (p = &a[0]; p < &a[N]; p++)
    sum += *p;
// is equivalent to
p = &a[0];
while (p < &a[N])
    sum += *p++;