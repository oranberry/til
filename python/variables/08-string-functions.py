# 🎈 문자열 관련 함수 (문자열 내장 함수)
# 문자열 변수 이름 뒤에 '.'를 붙인 다음에 함수 이름을 써주면 된다. 
python = "Python is Amazing"

# 1️⃣ lower() - 대문자를 소문자로 바꾸기
print(python.lower())

# 2️⃣ upper() - 소문자를 대문자로 바꾸기
print(python.upper())

# 3️⃣ isupper() - 문자가 대문자인지 확인 True/False
print(python[0].isupper())


# 4️⃣ count() - 문자 개수 세기
print(python.count("n")) # 문자열 중 문자 "n"의 개수를 돌려준다

# 5️⃣ replace(바뀌게 될 문자열, 바꿀 문자열) - 문자열 바꾸기
print(python.replace("Python", "Java")) # Java is Amazing
print(python) # Python is Amazing

# 6️⃣ index() - 위치 알려주기
# 문자열 중 원하는 문자가 처음으로 나온 위치를 반환한다. 
# 만약 찾는 문자나 문자열이 존재하지 않는다면 오류를 발생시킨다. (find 함수와의 차이점)
index = python.index("n") # 첫 번째 n 찾기
print(index) # 5
index = python.index("n", index + 1) # 두 번째 n 찾기
print(index) # 15

# 7️⃣ find() - 위치 알려주기
# 문자열 중 원하는 문자가 처음으로 나온 위치를 반환한다. 
# 만약 찾는 문자나 문자열이 존재하지 않는 다면 -1 반환 (index 함수와의 차이점)
print(python.find("n")) # 5
print(python.find("Java")) # -1

# 8️⃣ join() - 문자열 삽입
# 문자열 각각의 문자 사이에 원하는 문자열을 삽입한다. 
# 문자열뿐만 아니라 앞으로 배울 리스트나 튜플도 입력으로 사용할 수 있다. 
a = ", ".join('abcd')
print(a) # a, b, c, d


# 9️⃣ lstrip() - 왼쪽 공백 지우기
a = "  hi  "
print(a.lstrip())

# 1️⃣0️⃣ rstrip() - 오른쪽 공백 지우기
print(a.rstrip())

# 1️⃣1️⃣ strip() - 양쪽 공백 지우기
print(a.strip())

# 1️⃣2️⃣ split() - 문자열 나누기
# 나눈 값은 리스트에 하나씩 들어가게 된다. 
# 괄호 안에 아무 값도 넣어 주지 않으면 공백(스페이스, 탭, 엔터 등)을 기준으로 문자열 나눔
a = "Life is too short"
print(a.split())
# 괄호 안에 특정 값이 있을 경우에는 괄호 안의 값을 구분자로 해서 문자열 나눔
b = "a:b:c:d"
print(b.split(':'))
