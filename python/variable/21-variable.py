# 🎈 변수(variable) - 자료형의 값을 저장하는 공간
# 변수를 만들 때는 = (assignment) 기호를 사용한다
# 변수 이름 = 변수에 저장할 값
a = 1
b = "python"

# 튜플로 변수 값 대입 가능
a, b = ('python', 'life') 
print(a) # python
print(b) # life

(a, b) = 'python', 'life'  # 위의 예문과 완전 동일
print(a) # python
print(b) # life

# 리스트로 변수를 만들 수도 있다
[a, b] = ['python', 'life']
print(a) # python
print(b) # life

# 여러 개의 변수에 같은 값을 대입할 수도 있다
a = b = 'python'
print(a) # python
print(b) # python

# 두 변수의 값 바꾸기
a = 3
b = 5
a, b = b, a
print(a) # 5
print(b) # 3


# 🎈 리스트를 복사할 때
c = [1, 2, 3]
a = c

# 완전 동일, 다만 [1, 2, 3]을 참조하는 변수가 c 1개에서 a가 추가되어 2개로 늘어남.
# # 변수가 가리키는 메모리 주소는 id()로 확인할 수 있다.
# id 함수는 변수가 가리키고 있는 객체의 주소를 돌려주는 파이선 내장 함수이다. 
print(id(c)) 
print(id(a))

# 동일한 객체를 가리키고 있는 지 확인하는 파이썬 명령어 is
print(c is a) # True

# 두 변수가 동일한 리스트를 가리키고 있기 때문에 c 리스트의 요솟값을 변경하면 a의 값도 바뀜!
c[1] = 4
print(c) # [1, 4, 3]
print(a) # [1, 4, 3]


# 🎈 변수의 값을 가져오면서 다른 주소를 가리키도록 만드는 방법!
# 1. [:]사용
c = [1, 2, 3]
a = c[:]
c[1] = 4
print(c) # [1, 4, 3]
print(a) # [1, 2, 3]

# 2. copy 모듈 사용
from copy import copy
c = [1, 2, 3]
a = copy(c)
print(c) # [1, 2, 3]
print(a) # [1, 2, 3]
print(c is a) # False
