# 🎈 리스트 내포(List comprehension) 사용하기
# 리스트 안에 for문을 포함하는 리스트 내포를 사용하면 좀 더 편리하고 직관적인 프로그램을 만들 수 있다.
# [표현식 for 항목 in 반복 가능 객체 if 조건]


# a 리스트의 각 항목에 3을 곱한 결과를 result 리스트에 담는 예제
a = [1, 2, 3, 4]
result = []
for num in a :
    result.append(num * 3)
print(result)


# 리스트 내포 사용시
a = [1, 2, 3, 4]
result = [num * 3 for num in a]
print(result)


# 짝수에만 3을 곱하여 담고 싶을 때
a = [1, 2, 3, 4]
result = [num * 3 for num in a if num % 2 == 0]
print(result)


# for문 여러 개로 리스트 내포 사용시
# 구구단의 모든 결과를 리스트에 담는 예제
result = [x * y for x in range(2,10) for y in range(1,10)]
print(result)