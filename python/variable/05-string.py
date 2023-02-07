# 문자 자료형 (String)
# 문자, 단어 등으로 구성된 문자들의 집합

# 🎈 문자열을 만드는 방법 4가지
# 1. 큰따옴표 2. 작은따옴표 3. 큰따옴표 3개 연속 4. 작은따옴표 3개 연속
print("Life is too short, You need Python")
print('Hello World')
print("""Python is fun""")
print('''Life is fun''')
print("-"*30)

# 따옴표로 둘러싸여 있으면 모두 문자열!
a = 123
print(type(a))
a = "123"
print(type(a))
print("-"*30)


# 🎈 문자열 안에 작은따옴표나 큰따옴표를 포함시키고 싶을 때 
food = "Python's favorite food is perl"
print(food)
# food = 'Python's favorite food is perl' ❌ -> 백슬래시(\) 사용하기
food = 'Python\'s favorite food is perl'
print(food)

say = '"Python is very easy." he says.'
print(say)
# say = ""Python is very easy." he says." ❌ -> # 백슬래시(\) 사용하기
say = "\"Python is very easy.\" he says."
print(say)
print("-"*30)


# 🎈 여러 줄인 문자열을 변수에 대입하고 싶을 때
# 1. 줄을 바꾸는 이스케이프 코드 '\n' 삽입
# \n: 줄바꿈
multiline = "Life is too short\nYou need python"
print(multiline)

# 2. 연속된 작은따옴표 3개 또는 큰따옴표 3개 사용
multiline = '''
Life is too short
You need python
'''
print(multiline)

multiline = """
Life is too short
You need python
"""
print(multiline)


# 🎈 탈출 문자 
# \\: 문장 내에서 \로 출력
print("C:\\Users\\Oranberry\\Desktop\\Workspace>")

# \r: 커서를 맨 앞으로 이동
print("Red Apple\rPine") # PineApple

# \b: 백스페이스 (한 글자 삭제)
print("Redd\bApple") # RedApple

# \t: 탭
print("Red\tApple")
