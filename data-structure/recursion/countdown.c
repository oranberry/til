// 카운트다운하는 함수
#include <stdio.h>

void countdown(int i)
{
	printf("%d\n", i);

	// 기본 단계 (base case)
	if (i <= 0)
		return;
	// 재귀 단계 (recursive case)
	else
		countdown(i - 1);
}

int main(void)
{

	countdown(5);

	return 0;
}