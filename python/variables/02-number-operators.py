# 숫자형을 활용하기 위한 연산자
# 🎈 사칙연산 (+,-,*,/)
a = 7
b = 4
print(a+b) # 11
print(a-b) # 3
print(a*b) # 28
print(a/b) # 1.75


# 🎈 "x의 y제곱"을 나타내는 ** 연산자
print(a**b) # 7^4 = 7*7*7*7 = 2401


# 🎈 나눗셈 후 "나머지"를 반환하는 % 연산자
print(a%b) # 3
print(b%a) # 4


# 🎈 나눗셈 후 "몫"을 반환하는 // 연산자
print(a//b) # 1
print(b//a) # 0
print("-"*50)


# 🎈 대입 연산자 (Assignment Operator)
number = 2+3*4
print(number)
number = number+2 
print(number)
number+=2 # number+=2는 number=number+2와 동일하다
print(number)
number-=2
print(number)
number*=2 # 32
print(number)
number/=2 # 16.0
print(number)
number//=3 # 숫자를 나눈 뒤 그 몫만 대입 -> 5.0
print(number)
number%=3 # 숫자를 나눈 뒤 그 나머지만 대입 -> 2.0
print(number)
number**=2 # 숫자를 제곱한 후 대입 -> 4.0
print(number)