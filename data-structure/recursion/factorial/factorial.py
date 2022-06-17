# 팩토리얼 함수 (factorial function)
# factorial(5) == 5! == 5 x 4 x 3 x 2 x 1
# 재귀 함수에서 호출 스택 사용
def fact(x):
  if x == 1:
    return 1
  else:
    return x * fact(x-1)

print(fact(5))
