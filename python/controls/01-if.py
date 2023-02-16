# ✨ 제어문(Control Flow) - if문
# if문은 프로그래밍에서 조건문을 판단하여 해당 조건에 맞는 상황을 수행할 때 사용
# 조건문이란 참과 거짓을 판단하는 문장을 말한다. 
# else문은 if문 없이 독립적으로 사용할 수 없다. 
# ⭐️ 들여쓰기
# if문을 만들 때는 if 조건문: 바로 아래 문장부터 if문에 속하는 모든 문장에 들여쓰기(indentation)를 해주어야 한다.
# 들여쓰기는 언제나 같은 너비로 해야한다 (spacebar 4개 or tab)
# ⭐️ 조건문 다음에 콜론(:) 잊지말기!
# if 조건문 뒤에는 반드시 콜론(:)이 붙는다 (while, for, def, class문에도 문장의 끝에 항상 콜론이 들어간다)


# 🎈 조건을 판단하기 위해 사용하는 비교 연산자 (<, >, ==, !=, >=, <=)
x = 3
y = 2
print(x>y) # True
print(x<y) # False
print(x==y) # False
print(x!=y) # True

# 예제) 만약 3000원 이상의 돈을 가지고 있으면 택시를 타고 그렇지 않으면 걸어가라
money = 2000
if money >= 3000:
    print("택시타기")
else: 
    print("걸어가기")
# 걸어가기


# 🎈 조건을 판단하기 위해 사용하는 다른 연산자 - and, or, not
# x or y: 둘 중에 하나만 참이면 참
# x and y: 둘 다 참이여야 참
# not x: x가 거짓이면 참

# 예시) 만약 3000원 이상의 돈을 가지고 있거나 카드가 있다면 택시를 타고 그렇지 않으면 걸어가라
money = 2000
card = True
if money >= 3000 or card:
    print("택시타기")
else: 
    print("걸어가기")
# 택시타기


# 🎈 조건을 판단하기 위해 사용하는 다른 연산자 - x in s, x not in s
# x in 리스트, 튜플, 문자열
# x not in 리스트, 튜플, 문자열
print(1 in [1, 2, 3]) # True
print(1 not in [1, 2, 3]) # False

print('a' in ('a', 'b', 'c')) # True
print('j' not in 'python') # True

# 예시) 만약 주머니에 돈이 있으면 택시를 타고, 없으면 걸어가라
pocket = ['paper', 'cellphone', 'money']
if 'money' in pocket:
    print("택시타기")
else:
    print("걸어가기")
# 택시타기


# 🎈 pass
# 조건문의 참/거짓에 따라 실행할 행동을 정의할 때, 아무 일도 하지 않도록 설정하고 싶을 떄 사용

# 예시) 주머니에 돈이 있으면 가만히 있고 주머니에 돈이 없으면 카드를 꺼내라
pocket = ['paper', 'money', 'cellphone']
if 'money' in pocket:
    pass
else:
    print("카드꺼내기")
# 주머니에 돈이 있기 때문에 pass되어 아무 결괏값도 보여주지 않음.

# 수행할 문장이 한 줄일 때는 더 간략하게 코드를 작성할 수 있다.
if 'money' in pocket: pass
else: print("카드꺼내기")


# 🎈 조건부 표현식 (conditional expression)
# 조건문이 참인 경우 if 조건문 else 조건문이 거짓인 경우
score = 80
if score >= 60: message = "success"
else: message = "failure"
# 조건부 표현식을 사용하면 위 코드를 다음과 같이 간단히 표현할 수 있다. 
message = "success" if score >= 60 else "failure"


# 🎈 다양한 조건을 판단하는 elif
# if와 else만으로 다양한 조건을 판단하기 어렵기 때문에 elif를 사용
# elif는 이전 조건문이 거짓일 때 수행되며 개수에 제한 없이 사용할 수 있다. 

# 예시) 주머니에 돈이 있으면 택시를 타고, 주머니에 돈은 없지만 카드가 있으면 택시를 타고, 돈도 없고 카드도 없으면 걸어가라
pocket = ['paper', 'cellphone']
card = True
if 'money' in pocket:
    print('택시타기')
elif card:
    print('택시타기')
else:
    print('걸어가기')