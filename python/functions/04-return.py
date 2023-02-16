# 💥 함수의 결괏값은 언제나 하나이다.
def add_and_mul(a, b):
    return a+b, a*b # 함수의 결괏값 a+b와 a*b는 튜플값 하나인 (a+b, a*b)로 돌려준다
result = add_and_mul(3, 4) 

print(result) # (7, 12)

# 하나의 튜플 값을 2개의 결괏값처럼 받고 싶을 때
result1, result2 = add_and_mul(3, 4)
print(result1) # 7
print(result2) # 12


# 💥 return문을 여러개 사용한다면?
# 첫 번재 return문만 실행되고 종료
# 즉 함수는 return문을 만나는 순간 결괏값을 돌려준 다음 함수를 빠져나간다.
def add_and_mul(a, b):
    return a+b
    return a*b

result = add_and_mul(2, 3)
print(result) # 5


# 💥 특별한 상황일 때 함수를 빠져나가고 싶다면 return을 단독으로 써서 함수를 즉시 빠져나갈 수 있다. 
def say_nick(nick):
    if nick == "바보":
        return
    print("나의 별명은 %s입니다." %nick)
