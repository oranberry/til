# 숫자 자료형 (Number)
# 숫자 형태로 이루어진 자료형 - 정수, 실수, 8진수, 16진수

# 🎈 정수형 (Integer) - 양의 정수, 음의 정수, 숫자 0
a = 5
print(type(a))
a = -10
print(type(a))
a = 0
print(type(a))
print("-"*30)


# 🎈 실수형 (Floating-point) - 소수점이 포함된 숫자
b = 3.14
print(type(b))
b = -3.45
print(type(b))
# 컴퓨터식 지수 표현 방식 (e와 E 둘 다 가능)
b = 4.24E10 # 4.24 * 10^10
print(type(b))
b = 4.24e-10 # 4.24 * 10^-10
print(type(b))
print("-"*30)


# 🎈 8진수와 16진수
# 8진수 (Octal) - 0o or 0O (숫자0 + 알파벳 소문자 o 또는 대문자 O)로 시작
c = 0o177
print(c) # 127
# 16진수 (Hexadecimal) - 0x로 시작
d = 0x8ff 
print(d) # 2303
d = 0xABC
print(d) # 2748