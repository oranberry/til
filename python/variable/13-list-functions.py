# 리스트 관련 함수
# 문자열과 마찬가지로 리스트 변수 이름 뒤에 '.'를 붙여서 여러 가지 리스트 관련 함수를 사용할 수 있다.

# 🎈 append() - 리스트에 요소 추가
# 리스트의 맨 마지막에 요소를 추가하는 함수
a = [1, 2, 3]
a.append(4)
print(a) # [1, 2, 3, 4]
a.append([5, 6]) 
print(a) # [1, 2, 3, 4, [5, 6]]

# 🎈 sort() - 리스트 정렬 
# 리스트의 요소를 순서대로 정렬
a = [1, 4, 3, 2]
a.sort()
print(a) # [1, 2, 3, 4]
# 문자 역시 알파벳 순서로 정렬
a = ['a', 'c', 'b']
a.sort()
print(a) # ['a', 'b', 'c']

# 🎈 reverse() - 리스트 뒤집기
# 현재 리스트를 그대로 거꾸로 뒤집는다. 
a = ['a', 'c', 'b']
a.reverse()
print(a) # ['b', 'c', 'a']

# 🎈 index() - 위치 반환
# index(x) 함수는 리스트에 x 값이 있으면 x의 위치 값을 돌려준다.
a = [1, 2, 3]
print(a.index(3))
print(a.index(1))
# 리스트에 존재하지 않는 값은 값 오류가 발생한다.
# print(a.index(0)) ❌ ValueError

# 🎈 insert() - 리스트에 요소 삽입
# insert(a, b)는 리스트의 a번째 위치에 b를 삽입하는 함수이다. 
a = [1, 2, 3]
a.insert(0, 4)
print(a) # [4, 1, 2, 3]
a.insert(3, 5)
print(a) # [4, 1, 2, 5, 3]

# 🎈 remove() - 리스트 요소 제거
# remove(x)는 리스트에서 첫 번째로 나오는 x를 삭제하는 함수
a = [1, 2, 3, 1, 2, 3]
a.remove(3)
print(a) # [1, 2, 1, 2, 3]
a.remove(3)
print(a) # [1, 2, 1, 2]

# 🎈 pop() - 리스트 요소 끄집어내기
# pop()은 리스트의 맨 마지막 요소를 돌려주고 그 요소는 삭제한다.
a = [1, 2, 3]
print(a.pop()) # 3
print(a) # [1, 2]
# pop(x)는 리스트의 x번째 요소를 돌려주고 그 요소는 삭제한다.
a = [1, 2, 3]
print(a.pop(1)) # 2
print(a) # [1, 3]

# 🎈 count() - 리스트에 포함된 요소 x의 개수 세기
# count(x)는 리스트 안에 x가 몇 개 있는 지 조사하여 그 개수를 돌려주는 함수
a = [1, 2, 3, 1]
print(a.count(1))

# 🎈 extend() - 리스트 확장
# extend(x)에서 x에는 리스트만 올 수 있으며 원래의 a 리스트에 x 리스트를 더하게 된다. 
a = [1, 2, 3]
a.extend([4, 5])
print(a) # [1, 2, 3, 4, 5]
b = [6, 7]
a.extend(b)
print(a) # [1, 2, 3, 4, 5, 6, 7]

# 🎈 clear() - 모두 지우기
a.clear()
print(a) # []

