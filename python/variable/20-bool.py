# 🎈 Bool 자료형 - 참/거짓
# 불(bool) 자료형이란 참(True)과 거짓(False)을 나타내는 자료형이다
# 파이썬에서 True/False는 항상 첫 문자를 대문자로!
a = True
b = False
print(type(a)) # <class 'bool'>
print(type(b)) # <class 'bool'>


# 🎈 불 자료형은 조건문의 반환 값으로도 사용된다.
print(3 == 3) # True
print(4 == 2) # False
print(1 != 3) # True
print(5 > 10) # False
print(5 < 10) # True
print(4 >= 7) # False
print(5 <= 5) # True
print(3 + 4 == 7) # True

print(not (5 > 10)) # True
print(not(1 != 3)) # False

print((3 > 0) and (3 < 5)) # True
print((3 > 0) & (3 < 5)) # True

print((3 > 0) or (3 > 5)) # True
print((3 > 0) | (3 > 5)) # True

print(5 > 4 > 3) # True
print(5 > 4 > 7) # False
print("-"*50)


# 🎈 자료형의 참과 거짓
# 숫자는 값이 0일 때 거짓, 0이 아닌 숫자는 참
# 문자열, 리스트, 튜플, 딕셔너리 등의 값이 비어 있으면 ("", [], (), {}) 거짓, 비어있지 않으면 참
# None은 거짓을 뜻한다.

# Example 1
# a가 참인 동안 리스트의 마지막 요소를 하나씩 꺼냄
# 더 이상 꺼낼 것이 없으면 a가 빈 리스트 []가 되어 거짓이 된다. -> while문 종료
a = [1, 2, 3, 4]
while a:
    print(a.pop())
# 4
# 3
# 2
# 1

# Example 2 -> False
# 비어 있는 리스트는 거짓
if []:
    print("True")
else:
    print("False")

# Example 3 -> True
# 요솟값이 있는 리스트는 참
if [1, 2, 3]:
    print("True")
else:
    print("False")


# 🎈 불 연산
# bool 내장 함수를 사용해서 자료형의 참과 거짓을 식별할 수 있다.
print(bool('python')) # True
print(bool('')) # False
print(bool([1, 2, 3])) # True
print(bool([])) # False
print(bool(0)) # False
print(bool(3)) # True