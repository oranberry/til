# ✨ 모듈(module)
# 모듈이란 함수나 변수 또는 클래스를 모아 놓은 파일
# 다른 파이썬 프로그램에서 불러와 사용할 수 있게끔 만든 파이썬 파일
# 파이썬 확장자 .py로 만든 파이썬 파일은 모두 모듈이다. 

# 모듈 불러오기
# import 모듈 이름 (확장자 제거)

# (예시) mod1.py을 불러오기
import mod1

print(mod1.add(3,4)) # 7
print(mod1.sub(4,2)) # 2


# 모듈 이름 없이 함수 이름만 사용하려면
# from 모듈 이름 import 모듈 함수
from mod1 import add, sub
print(add(3,5)) # 8
print(sub(8,4)) # 4


# 모든 함수를 불러서 사용하려면 * 문자 사용
from mod1 import *