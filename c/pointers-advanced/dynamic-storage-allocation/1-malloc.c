// ๐ซ malloc ํจ์๋ก ๋์  ๋ฉ๋ชจ๋ฆฌ ํ ๋นํ๊ธฐ
// Heap์ Stack์ฒ๋ผ ๊ด๋ฆฌ๋๋ ๊ณต๊ฐ์ด ์๋๋ผ์ ๋ณ์๋ฅผ ์ ์ธํ๋ ํ์๋ก ๋ฉ๋ก๋ฆฌ๋ฅผ ํ ๋นํ  ์ ์์ด
// malloc (memory allocation)์ ์ฌ์ฉํด์ ๋ฉ๋ชจ๋ฆฌ๋ฅผ ํ ๋นํด์ผ ํ๋ค.

// ์ด ํจ์๋ ์ฌ์ฉ์๊ฐ size ๋ณ์์ ์ง์ ํ ํฌ๊ธฐ๋งํผ heap ์์ญ์ ๋ฉ๋ชจ๋ฆฌ๋ฅผ ํ ๋นํ๊ณ  ๊ทธ ํ ๋น๋ ์ฃผ์๋ฅผ void *ํ์์ผ๋ก ๋ฐํํด์ค๋ค.

// Prototype for the malloc function:
void *malloc(size_t size);
// malloc allocates a block of size bytes and returns a pointer to it
// size_t๋ unsigned int์ ๊ฐ์ ์๋ฃํ, ๋ฉ๋ชจ๋ฆฌ ํ ๋น์ ํญ์ ์์๋ก๋ง ๊ฐ๋ฅํ๊ธฐ ๋๋ฌธ์ ์์๋ฅผ ๊ณ ๋ คํ์ง ์๊ฒ ๋ค๋ ๋ป (defined in the library)
#include <stdlib.h>

// ํจ์ ์ฌ์ฉ ํ์:
void *p = malloc(100); // 100๋ฐ์ดํธ์ ๋ฉ๋ชจ๋ฆฌ๋ฅผ ํ ๋นํ์ฌ ํฌ์ธํฐ p์ ์ ์ฅํจ

// ์ฌ์ฉ์๊ฐ malloc ํจ์๋ก 100bytes ๋ฉ๋ชจ๋ฆฌ๋ฅผ ํ ๋นํ๋๋ผ๋ ์ด ๋ฉ๋ชจ๋ฆฌ๋ฅผ 2๋ฐ์ดํธ(short)๋จ์์ 50๊ฐ ๋ฐ์ดํฐ ๊ทธ๋ฃน์ผ๋ก ์ฌ์ฉํ  ์ง,
// 4๋ฐ์ดํธ(int) ๋จ์์ 25๊ฐ ๊ทธ๋ฃน์ผ๋ก ์ฌ์ฉํ ์ง๋ ์์ํ  ์ ์๋ค. ๊ทธ๋์ malloc ํจ์๊ฐ ๋ฉ๋ชจ๋ฆฌ์ ์ฌ์ฉ ๋จ์๋ฅผ ๊ฒฐ์ ํ์ง ์๊ณ 
// void * ํ์์ผ๋ก ์ฃผ์๋ฅผ ๋ฐํํด ์ฃผ๋ ๊ฒ์ด๋ค.

// No cast is necessary.
// In general, we can assign a void * value to a variable of any pointer type and vice versa.
// Nevertheless, some programmers prefer to cast malloc's return value:
short *p = (short *)malloc(100);
int *p = (int *)malloc(100);

// 50๋ฐ์ดํธ ๋ฉ๋ชจ๋ฆฌ๋ฅผ ๋์ ์ผ๋ก ํ ๋นํ  ๋ 2 ๋ฐ์ดํธ์ฉ 25๊ฐ ๊ทธ๋ฃน์ผ๋ก ์ฌ์ฉํ๋ ค๋ฉด?
short *p = (short *)malloc(50);
// 200๋ฐ์ดํธ ๋ฉ๋ชจ๋ฆฌ๋ฅผ ๋์ ์ผ๋ก ํ ๋นํ  ๋ 4 ๋ฐ์ดํธ์ฉ 50๊ฐ ๊ทธ๋ฃน์ผ๋ก ์ฌ์ฉํ๋ ค๋ฉด?
int *p = (int *)malloc(200);
