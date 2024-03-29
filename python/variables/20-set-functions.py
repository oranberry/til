# 집합 자료형 관련 함수

# 🎈 add() - 값 1개 추가하기
# 이미 만들어진 set 자료형에 값을 추가할 수 있다. 
# 1개의 값만 추가(add)할 경우에는 다음과 같이 한다.
s1 = set([1, 2, 3])
s1.add(4)
print(s1) # {1, 2, 3, 4}

# 🎈 update() - 값 여러 개 추가하기
# 여러 개의 값을 한꺼번에 추가(update)할 때는 다음과 같이 한다.
s1 = set([1, 2, 3])
s1.update([4, 5, 6])
print(s1) # {1, 2, 3, 4, 5, 6}

# 🎈 remove() - 특정 값 제거하기
# 특정 값을 제거하고 싶을 때는 다음과 같이 하면 된다.
s1 = set([1, 2, 3])
s1.remove(2)
print(s1) # {1, 3}
