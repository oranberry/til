# 🎈 변수(variable) - 자료형의 값을 저장하는 공간
# 변수를 만들 때는 = (assignment) 기호를 사용한다
# 변수 이름 = 변수에 저장할 값
# 파이썬은 변수에 저장된 값을 스스로 판단하여 자료형을 지정하기 때문에 편리하다(자료형을 직접 지정하지 않아도 됨).
a = 1
# 1 값을 가지는 숫자 자료형이 자동으로 메모리에 생성되고 변수 a는 1이 저장된 메모리 주소를 가리키게 된다. 
b = "python"
# "python" 값을 가지는 문자열 자료형이 자동으로 메모리에 생성되고 변수 b는 "python"이 저장된 메모리 주소를 가리키게 된다. 

# 메모리 주소 확인하기
# 변수가 가리키는 메모리 주소는 id()로 확인할 수 있다.
print(id(a))
print(id(b))


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
a = [1, 2, 3]
b = a
print(id(a)) 
print(id(b))
# b 변수에 a 변수를 대입하면? 완전히 동일 (값과 메모리 주소)
# 다만 [1, 2, 3]을 참조하는 변수가 a 1개에서 b가 추가되어 2개로 늘어남.
# 두 개의 변수 a, b가 같은 메모리 주소를 가리키고 같은 값([1, 2, 3])을 참조하고 있다. 

# 동일한 객체를 가리키고 있는 지 확인하는 파이썬 명령어 is
print(a is b) # True

# 두 변수가 동일한 리스트를 가리키고 있기 때문에 a 리스트의 요솟값을 변경하면 b의 값도 바뀜!
a[1] = 4
print(a) # [1, 4, 3]
print(b) # [1, 4, 3]


# 💥 변수의 값을 가져오면서 다른 주소를 가리키도록 만드는 방법!
# 1. [:]사용해서 복사하기
a = [1, 2, 3]
b = a[:]
a[1] = 4
print(a) # [1, 4, 3]
print(b) # [1, 2, 3]

# 2. copy 모듈 사용
from copy import copy
a = [1, 2, 3]
b = copy(a)
print(a) # [1, 2, 3]
print(b) # [1, 2, 3]
print(b is a) # False - a와 b가 가리키는 객체가 다르다