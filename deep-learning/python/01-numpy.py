# ⭐️ 넘파이(numpy) : 수치 계산용 라이브러리
# 딥러닝을 구현하다 보면 배열이나 행렬 계산이 많이 등장하는 데,
# 넘파이의 배열 클래스인 numpy.array에는 편리한 메서드가 많이 있어, 딥러닝을 구현할 때 이 메서드들을 이용한다. 

# 넘파이는 외부 라이브러리로 표준 파이썬에는 포함되지 않기 때문에 넘파이 라이브러리를 쓸수 있도록 가져와야(import) 한다. 
import numpy as np

# 🎈 넘파이 배열 생성
# 넘파이 배열을 만들 때는 np.array() 메서드를 이용한다.
# np.array()는 파이썬의 리스트를 인수로 받아 넘파이 라이브러리가 제공하는 특수한 형태의 배열(numpy.ndarray)을 반환
x = np.array([1.0, 2.0, 3.0])
print(x) # [1. 2. 3.]

print(type(x)) # <class 'numpy.ndarray'>


# 🎈 넘파이의 산술연산
# 배열 x와 y의 원소 수가 동일 (다르면 오류 발생)
x = np.array([1.0, 2.0, 3.0])
y = np.array([2.0, 4.0, 6.0])

# 원소별 덧셈 (element-wise addition)
print(x+y) # [3. 6. 9.]
# 원소별 뺄셈 (element-wise subtraction)
print(x-y) # [-1. -2. -3.]
# 원소별 곱셈 (element-wise product)
print(x*y) # [ 2. 8. 18.]
# 원소별 나누셈 (element-wise division)
print(x/y) # [0.5 0.5 0.5]

# 넘파이 배열은 원소별 계산뿐 아니라 넘파이 배열과 수치 하나(스칼라값)의 조합으로 된 산술연산도 가능하다.
# 이 경우 스칼라값과의 계산이 넘파이 배열의 원소별로 한 번씩 수행된다. 이 기능을 브로드캐스트라고 한다. 
x = np.array([1.0, 2.0, 3.0])
print(x / 2.0) # [0.5 1. 1.5]
