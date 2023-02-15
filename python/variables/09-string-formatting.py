# 문자열 포매팅 (Formatting)
# 문자열 안에 어떤 값을 삽입하는 방법
# %d - 정수형 숫자 (integer)
# %s - 문자열 (string)
# %c - 문자 1개 (character)
# %f - 부동 소수 (floating-point)
# %o - 8진수
# %x - 16진수

# 🎈 숫자 바로 대입
# 문자열 안에서 숫자를 넣고 싶은 자리에 %d 문자를 넣어주고, 삽입할 숫자는 가장 뒤에 % 문자 다음에 넣어준다.
print("I eat %d apples." %1)
print("I eat {} apples.".format(1)) # format 함수 이용
print("I eat {0} apples.".format(1))


# 🎈. 문자열 바로 대입
# 문자열 안에 또 다른 문자열을 삽입하기 위해서는 %s를 쓴다. 
print("I eat %s apples." %"two")
print("I eat {0} apples.".format("two"))
# %s는 자동으로 % 뒤에 있는 값을 문자열로 바꾼다.
print("I have %s apples" %3)
print("rate is %s" %3.234)


# 🎈 숫자 값을 나타내는 변수로 대입
number = 3
print("I eat %d apples." %number)
print("I eat {0} apples.".format(number))


# 🎈 2개 이상의 값 넣기
# 마지막 % 다음 괄호 안에 콤마(,)로 구분하여 각각의 값을 넣어준다.
number = 4
day = "five"
print("I ate %d apples. so I was sick for %s days" %(number, day))
print("I ate {} apples. so I was sick for {} days".format(number, day))
print("I ate {0} apples. so I was sick for {1} days".format(number, day)) # {0} - number, {1} - day
print("I ate {1} apples. so I was sick for {0} days".format(number, day)) # {0} - number, {1} - day

# 파이썬 3.6 버전부터는 f 문자열 포매팅을 지원한다. 
print(f"I ate {number} apples. so I was sick for {day} days") 
# f 문자열 포매팅은 표현식 지원 
print(f"I ate {number+1} apples. so I was sick for {day} days")

# 변수 선언 없이 사용
print("I ate {number} apples. so I was sick for {day} days".format(number=10, day="six"))
print("I ate {0} apples. so I was sick for {day} days".format(11, day="7")) # 인덱스와 이름을 같이 사용할 수 도 있다


# 🎈 문자 '%' 자체 출력하기
# print("Error is %d%." %98) ❌ ValueError
print("Error is %d%%." %98)

# { 또는 } 문자 표현하기
# {}와 같은 중괄호(brace) 문자를 포매팅 문자가 아닌 문자 그대로 사용하고 싶은 경우에는 
# {{ }} 처럼 2개를 연속해서 사용
print("{{ and }}".format())
print(f'{{ and }}')