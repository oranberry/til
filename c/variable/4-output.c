// 💫 Printing the value of a variable
// No limit to the number of variables that can be printed by a single call of printf:
int height = 10, length = 20;
printf("Height: %d, Length: %d\n", height, length);

// Conversion specifications %d works only for int variables;
// to print a float or double variable, use %f instead

// By default, %f displays a number with ⭐️ six digits ⭐️ after the decimal point.
// To force %f to display p digits after the decimal point, put .p between % and f.
double profit = 2150.4878940;
printf("Profit: $%.2f\n", profit); // Profit: $2150.49 (반올림)

// ⚠️ Compilers aren’t required to check that the number of conversion specifications matches the number of output items.
// But, you may get a warning: too few (many) arguments
int i = 5, j = 10;
// 1. Too many conversion specifications:
printf("%d %d\n", i); /*** WRONG ***/
// 2. Too few conversion specifications:
printf("%d\n", i, j); /*** WRONG ***/

// ⚠️ Compilers aren’t required to check that a conversion specification is appropriate.
// But, you will get a warning:
// format ‘%d’ expects type ‘int’, but argument has type ‘double’
// format '%f' expects type 'double' or 'float', but argument has type 'int'
int x = 14;
double y = 4.5;
printf("%f %d\n", x, y); /*** WRONG ***/

// ⚠️ overflow
// 정수형 변수 4 bytes = 32 bits
// 첫 bit는 양수/음수 부호
// 정수형 범위는 -2147483648 ~ 2147483647 (2^31 - 1)

// 범위보다 크거나 작은 수를 담으면 overflow!
// 예를 들어 정수형 변수에 2147483648를 할당하면 -2147483648 출력됨
// 2147483649를 할당하면 -2147483647 출력됨
// -2147483649를 할당하면 2147483647 출력됨 (회전)
int a = 2147483648; /* overflow */