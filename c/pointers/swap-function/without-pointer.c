#include <stdio.h>
void swap (int a, int b);
int main()
{
  int x = 3, y = 4;
  swap(x, y); /* The value of x is 4 and y is 3 */
  return 0;
}
void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
  printf("The value of x is %d and y is %d\n", a, b);
}
/* 함수의 return 키워드를 사용해서 함수의 작업 결과 값을 함수를 호출한 쪽으로 전달할 수 있다.
하지만 return은 한 번에 한 개의 값만 반환하고 두 개 이상의 값을 동시에 반환할 수 없기 때문에
포인터를 사용하는 것이 더 효과적이다. */
