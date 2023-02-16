# 🎈 함수 안에서 선언한 변수의 효력 범위 알아보기
# 함수 안에서 새로 만든 매개변수는 함수 안에서만 사용하는 '함수만의 변수'
# 즉, 함수 안에서 사용하는 매개변수는 함수 밖의 변수 이름과는 전혀 상관이 없다
a = 1
def vartest(a):
    a = a + 1

vartest(a)
print(a) # 1


# 함수 안에서 함수 밖의 변수를 변경하는 방법
# 1️⃣  return 사용하기
a = 1
def vartest(a):
    a = a + 1
    return a

a = vartest(a)
print(a) # 2


# 2️⃣ global 명령어 사용하기 (추천 ❌)
# global 명령어는 함수 안에서 함수 밖의 a변수를 직접 사용하겠다는 뜻
# 함수는 독립적으로 존재하는 것이 좋기 때문에 외부 변수에 종속적인 함수는 좋지 않음
a = 1
def vartest():
    global a
    a = a + 1

vartest()
print(a) # 2