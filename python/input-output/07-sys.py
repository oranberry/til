# 🎈 sys 모듈로 매개변수 주기
# 대부분의 명령 프롬프트 명령어는 명령행(명령 프롬프트 창)에서 매개변수를 직접 주어 프로그램을 실행하는 방식이다. 
# 파이썬에서는 sys 모듈을 사용하여 매개변수를 직접 줄 수 있다.
# 같은 디렉터리 안에 있어야 실행된다. 

# 입력받는 인수를 for문에 사용해 차례대로 하나씩 출력하는 예
# sys모듈의 argv는 명령 창에서 입력한 인수를 의미한다.
# sys1.py aaa bbb ccc
# argv[0] = sys1.py
# argv[1] = aaa
# argv[2] = bbb
# argv[3] = ccc

import sys

args = sys.argv[1:]
for i in args:
    print(i)

# python 07-sys.py aaa bbb ccc
# aaa
# bbb
# ccc