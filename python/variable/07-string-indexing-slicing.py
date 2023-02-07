# 문자열 인덱싱과 슬라이싱
# 🎈 인덱싱 (Indexing)
# 파이썬은 숫자를 0부터 센다!
a = "Life is too short, You need Python"
print(a[3]) # 'e'
# a[0] = 'L'
# a[1] = 'i'
# a[2] = 'f'
# a[3] = 'e'
# a[4] = ' '
# ...

# 문자열을 뒤에서부터 읽을 때는 마이너스(-) 기호를 사용
print(a[-1]) # 'n'
print(a[-2]) # 'o'
print(a[-5]) # 'y'

# 0과 -0은 동일 
print(a[-0]) # 'L' 
print("-"*50)


# 🎈 슬라이싱 (Slicing)
# a[시작번호:끝번호]를 지정할 때 끝 번호에 해당하는 것은 포함하지 않는다.
b = a[0] + a[1] + a[2] + a[3]
print(b)
print(a[0:4]) # 0 <= a < 4

# 끝번호 부분을 생략하면 시작 번호부터 문자열의 끝까지 뽑아낸다.
print(a[19:])

# 시작 번호를 생략하면 문자열의 처음부터 끝 번호까지 뽑아낸다.
print(a[:17])

# 시작 번호와 끝 번호를 생략하면 문자열의 처음부터 끝까지 뽑아낸다.
print(a[:])

# 슬라이싱에서도 인덱싱과 마찬가지로 마이너스 기호를 사용할 수 있다.
print(a[19:-7])
print("-"*50)

# 슬라이싱으로 문자열 나누기 예시
a = "20010331Rainy"
year = a[:4]
day = a[4:8]
weather= a[8:]
print(year)
print(day)
print(weather)

# 문자열의 요솟값 변경 ❌
# 문자열 자료형은 요솟값을 변경할 수 없다. 그래서 immutable한 자료형이라고 부른다.
a = "Pithon"
# 변수에 있는 "Pithon"을 "Python"으로 바꾸려면?
b = a[:1] + 'y' + a[2:]
print(b)
