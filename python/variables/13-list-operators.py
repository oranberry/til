# 리스트 연산하기
# 리스트는 + 기호를 사용해서 더할 수 있고 * 기호를 사용해서 반복할 수 있다.

# 🎈 리스트 더하기(+)
a = [1, 2, 3]
b = [4, 5, 6]
print(a+b) # [1, 2, 3, 4, 5, 6]

# 🎈 리스트 반복하기(*)
a = [1, 2, 3]
print(a * 3) # [1, 2, 3, 1, 2, 3, 1, 2, 3]

# 🎈 리스트 길이 구하기 - len()
# 문자열, 리스트 외에 튜플과 딕셔너리에도 사용할 수 있는 함수
print(len(a))
print(len(a+b))
print(len(a*3))

# print(a[2] + "hi") ❌ TypeError
# 정수와 문자열은 서로 더할 수 없기 떄문에 형 오류가 발생한다. 
# 숫자와 문자열을 더해서 '3hi'처럼 만들고 싶다면 숫자 3을 문자 '3'으로 바꾸어 주어야 한다.
# str 함수는 정수나 실수를 문자열 형태로 바꾸어 주는 파이썬의 내장 함수이다.
print(str(a[2]) + "hi")


# 리스트의 수정과 삭제
# 리스트는 값을 수정하거나 삭제할 수 있다.
# 🎈 리스트에서 값 수정하기
a = [1, 2, 3]
a[2] = 4
print(a) # [1, 2, 4]

# 🎈 리스트에서 값 삭제하기
# del 함수를 사용해 리스트 요소 삭제하기
# del a[x]는 x번째 요솟값을 삭제
# 그 밖에 리스트의 요소를 삭제하는 방법에는 리스트 관련 함수인 remove와 pop함수를 사용할 수 있다.
del a[1]
print(a) # [1, 4]

a = [1, 2, 3, 4, 5]
del a[2:] 
print(a) # [1, 2]
