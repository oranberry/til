# 카운트다운하는 함수

def countdown(i):
  # 기본 단계 (base case)
  if i <= 0:
    return 0
  # 재귀 단계 (recursive case)
  else:
    print(i)
    return countdown(i-1)

countdown(5)
