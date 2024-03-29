# 교집합, 합집합, 차집합 구하기
# set 자료형을 정말 유용하게 사용하는 경우는 교집합, 합집합, 차집합을 구할 때이다.

s1 = set([1, 2, 3, 4, 5, 6])
s2 = set([4, 5, 6, 7, 8, 9])

# 🎈 교집합
# '&' 기호를 사용하면 교집합을 간단히 구할 수 있다.
# 또는 intersection 함수를 사용해도 동일한 결과를 돌려준다.
print(s1 & s2) # {4, 5, 6}
print(s1.intersection(s2)) # {4, 5, 6}
print(s2.intersection(s1)) # {4, 5, 6}


# 🎈 합집합
# '|' 기호를 사용해서 합집합을 구할 수 있다. 
# 또는 union 함수를 사용해도 동일한 결과를 돌려준다.
print(s1 | s2) # {1, 2, 3, 4, 5, 6, 7, 8, 9}
print(s1.union(s2)) # {1, 2, 3, 4, 5, 6, 7, 8, 9}
print(s2.union(s1)) # {1, 2, 3, 4, 5, 6, 7, 8, 9}


# 🎈 차집합
# '-' 빼기 기호를 사용해서 차 집합을 구할 수 있다.
# 또는 difference 함수를 사용해도 차집합을 구할 수 있다.
print(s1 - s2) # {1, 2, 3}
print(s1.difference(s2)) # {1, 2, 3}

print(s2 - s1) # {8, 9, 7}
print(s2.difference(s1)) # {8, 9, 7}
