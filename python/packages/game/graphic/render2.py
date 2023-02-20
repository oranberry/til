# echo_test 함수를 사용할 수 있도록 수정
from game.sound.echo import echo_test
# 위의 예시처럼 전체 경로를 사용하여 import할 수도 있지만 relative하게 import하는 것도 가능
# graphic과 sound 디렉터리는 동일한 깊이(depth)이므로 부모 디렉터리(..)를 사용하여 import 할 수 있다.
# ..과 같은 relative한 접근자는 모듈 안에서만 사용해야 한다. ex. render2.py
# 파이썬 인터프리터에서 사용하면 SystemError 발생
from ..sound.echo import echo_test

def render_test():
    print("render")
    echo_test()

