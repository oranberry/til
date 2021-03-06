// ๐ซ Printing the value of a variable
// No limit to the number of variables that can be printed by a single call of printf:
int height = 10, length = 20;
printf("Height: %d, Length: %d\n", height, length);

// Conversion specifications %d works only for int variables;
// to print a float or double variable, use %f instead

// By default, %f displays a number with โญ๏ธ six digits โญ๏ธ after the decimal point.
// To force %f to display p digits after the decimal point, put .p between % and f.
double profit = 2150.4878940;
printf("Profit: $%.2f\n", profit); // Profit: $2150.49 (๋ฐ์ฌ๋ฆผ)

// โ ๏ธ Compilers arenโt required to check that the number of conversion specifications matches the number of output items.
// But, you may get a warning: too few (many) arguments
int i = 5, j = 10;
// 1. Too many conversion specifications:
printf("%d %d\n", i); /*** WRONG ***/
// 2. Too few conversion specifications:
printf("%d\n", i, j); /*** WRONG ***/

// โ ๏ธ Compilers arenโt required to check that a conversion specification is appropriate.
// But, you will get a warning:
// format โ%dโ expects type โintโ, but argument has type โdoubleโ
// format '%f' expects type 'double' or 'float', but argument has type 'int'
int x = 14;
double y = 4.5;
printf("%f %d\n", x, y); /*** WRONG ***/

// โ ๏ธ overflow
// ์ ์ํ ๋ณ์ 4 bytes = 32 bits
// ์ฒซ bit๋ ์์/์์ ๋ถํธ
// ์ ์ํ ๋ฒ์๋ -2147483648 ~ 2147483647 (2^31 - 1)

// ๋ฒ์๋ณด๋ค ํฌ๊ฑฐ๋ ์์ ์๋ฅผ ๋ด์ผ๋ฉด overflow!
// ์๋ฅผ ๋ค์ด ์ ์ํ ๋ณ์์ 2147483648๋ฅผ ํ ๋นํ๋ฉด -2147483648 ์ถ๋ ฅ๋จ
// 2147483649๋ฅผ ํ ๋นํ๋ฉด -2147483647 ์ถ๋ ฅ๋จ
// -2147483649๋ฅผ ํ ๋นํ๋ฉด 2147483647 ์ถ๋ ฅ๋จ (ํ์ )
int a = 2147483648; /* overflow */