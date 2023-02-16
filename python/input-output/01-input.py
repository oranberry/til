# 🎈 사용자의 입력 - input()
# input은 오직 하나의 argument만 받음
# input으로 user에게 질문을 할 수 있고 user의 답을 받는다. 
# 사용자가 답하는 것이 input 함수의 return 값이 된다. 

a = input()
print(a)

number = input("숫자를 입력하세요: ")
print(number)

age = input("How old are you? ")
print("user answer", age)

# input은 입력되는 모든 것을 문자열로 취급한다.
print(type(age))

# 숫자로 사용하고 싶은 경우
int(age)
# 또는 
age = int(input("How old are you? "))

if age < 18: 
    print("You can't drink.")
else:
    print("Go ahead!")