# 문자열 관련 함수 (문자열 내장 함수)
# 문자열 변수 이름 뒤에 '.'를 붙인 다음에 함수 이름을 써주면 된다. 
python = "Python is Amazing"

# 🎈 lower() - 대문자를 소문자로 바꾸기
print(python.lower())

# 🎈 upper() - 소문자를 대문자로 바꾸기
print(python.upper())

# 🎈 isupper() - 문자가 대문자인지 확인 True/False
print(python[0].isupper())

# 🎈 count() - 문자 개수 세기
print(python.count("n"))

# 🎈 replace(바뀌게 될 문자열, 바꿀 문자열) - 문자열 바꾸기
print(python.replace("Python", "Java"))

# 🎈 index() - 위치 알려주기
# 문자열 중 원하는 문자가 처음으로 나온 위치를 반환한다. 
# 만약 찾는 문자나 문자열이 존재하지 않는다면 오류를 발생시킨다. (find 함수와의 차이점)
index = python.index("n") # 첫 번째 n 찾기
print(index) # 5
index = python.index("n", index + 1) # 두 번째 n 찾기
print(index) # 15

# 🎈 find() - 위치 알려주기
# 문자열 중 원하는 문자가 처음으로 나온 위치를 반환한다. 
# 만약 찾는 문자나 문자열이 존재하지 않는 다면 -1 반환 (index 함수와의 차이점)
print(python.find("n")) # 5
print(python.find("Java")) # -1

# 🎈 join() - 문자열 삽입
# 문자열 각각의 문자 사이에 원하는 문자열을 삽입한다. 
a = ", ".join('abcd')
print(a)

# 🎈 lstrip() - 왼쪽 공백 지우기
a = "  hi  "
print(a.lstrip())

# 🎈 rstrip() - 오른쪽 공백 지우기
print(a.rstrip())

# 🎈 strip() - 양쪽 공백 지우기
print(a.strip())

# 🎈 split() - 문자열 나누기
# 나눈 값은 리스트에 하나씩 들어가게 된다. 
# 괄호 안에 아무 값도 넣어 주지 않으면 공백(스페이스, 탭, 엔터 등)을 기준으로 문자열 나눔
a = "Life is too short"
print(a.split())
# 괄호 안에 특정 값이 있을 경우에는 괄호 안의 값을 구분자로 해서 문자열 나눔
b = "a:b:c:d"
print(b.split(':'))


# Quiz
# 사이트별로 비밀번호를 만들어 주는 프로그램을 작성하시오.
# 예) http://naver.com
# 규칙1: http:// 부분은 제외 => naver.com
# 규칙2: 처음 만나는 점(.) 이후 부분은 제외 => naver
# 규칙3: 남은 글자 중 처음 세자리 + 글자 갯수 + 글자 내 'e' 갯수 + "!"로 구성
# 예) 생성된 비밀번호: nav51!

url = "http://google.com"
my_str = url.replace("http://", "") # 규칙1
# print(my_str)
my_str = my_str[:my_str.index(".")] # 규칙2
# print(my_str)
password = my_str[:3] + str(len(my_str)) + str(my_str.count('e')) + "!" # 규칙3
# print(password)
print("{0} 의 비밀번호는 {1} 입니다.".format(url, password))
