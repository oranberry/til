# ✨ 패키지(Packages)
# 패키지는 도트(.)를 사용하여 파이썬 모듈을 계층적(디렉터리 구조)으로 관리할 수 있게 해준다.
# 예를 들어 모듈 이름이 A.B인 경우에 A는 패키지 이름이 되고 B는 A 패키지의 B 모듈이 된다.

# 파이썬 패키지는 디렉터리와 파이썬 모듈로 이루어진다.
# 간단한 파이썬 프로그램이 아니라면 이렇게 패키지 구조로 파이썬 프로그램을 만드는 것이 공동 작업이나 유지 보수 등 여러 면에서 유리하다. 
# 또한 패키지 구조로 모듈을 만들면 다른 모듈과 이름이 겹치더라도 더 안전하게 사용할 수 있다.

# 패키지 안의 함수 실행하기

# (예시) game 패키지
# 1️⃣ echo 모듈을 import하여 실행
import game.sound.echo
game.sound.echo.echo_test() # echo

# 2️⃣ echo 모듈이 있는 디렉터리까지를 from ... import하여 실행
from game.sound import echo
echo.echo_test() # echo

# 3️⃣ echo 모듈의 echo_test 함수를 직접 import하여 실행
from game.sound.echo import echo_test
echo_test() # echo

# 오류 발생 예시1
# import game 수행시 game 디렉터리의 모듈 또는 game 디렉터리의 __init__.py에 정의한 것만 참조 가능
# import game
# game.sound.echo.echo_test() ❌

# 오류 발생 예시2
# 도트 연산자(.)를 사용해서 import할 때 가장 마지막 항목은 반드시 모듈 또는 패키지여야만 한다. 
# import game.sound.echo.echo_test ❌
