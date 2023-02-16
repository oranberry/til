# 🎈 매개변수(parameter)와 인수(arguments)
# 매개변수는 함수에 입력으로 전달된 값을 받는 변수를 의미하고 
# 인수는 함수를 호출할 때 전달하는 입력값을 의미한다. 

def add(a, b): # a, b는 매개변수
    return a + b

print(add(3, 4)) # 3, 4는 인수


# 함수를 호출할 때 매개변수를 지정할 수도 있다.
result = add(a=3, b=7)
print(result) # 10


# 매개변수를 지정하면 순서에 상관없이 사용할 수 있다는 장점이 있다
result = add(b=5, a=3)
print(result) # 8


# 🎈 매개변수에 초깃값 미리 설정하기
def say_myself(name, old, man=True):
    print("이름: %s" %name)
    print("나이: %d" %old)
    if man:
        print("성별: 남자")
    else:
        print("성별: 여자")
# man=True 처럼 매개변수에 미리 값을 넣어줄 수 있다 (매개변수 초깃값 설정)
# 함수의 매개변수에 들어갈 값이 항상 변하는 것이 아닐 경우 함수의 초깃값을 설정해두면 유용

say_myself("헬로", 20)
say_myself("헬로", 20, False)

# 주의할 점! 초깃값을 설정한 매개변수의 위치에 주의하기
# 초기화 시키고 싶은 매개변수를 항상 뒤쪽에 놓기!!