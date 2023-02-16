# 🎈 lambda
# lambda는 함수를 생성할 때 사용하는 예약어로 def와 동일한 역할
# 보통 합수를 한줄로 간결하게 만들 때 사용
# lambda 매개변수1, 매개변수2, ...: 매개변수를 사용한 표현식
# lambda로 만든 함수는 return 명령어가 없어도 결괏값을 돌려준다.

add = lambda a, b: a+b

result = add(3, 4)
print(result)

# def를 사용한 동일한 함수
def add(a, b):
    return a+b

result = add(3, 4)
print(result)