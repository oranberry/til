# 🎈 __name__ 변수란
# 파이썬이 내부적으로 사용하는 특별한 변수 이름
# a built-in variable which evaluates to the name of the current module.
# It can be used to check whether the current script is being run on its own 
# or being imported somewhere else by combining it with if statement.

# mod1.py
def add(a, b):
    return a + b

def sub(a, b):
    return a - b

# if __name__ == "__main__" 사용시
# 직접 파일 실행하면 __name__ == "__main__"이 참이 되어 if문이 수행된다.
# 반대로 대화형 인터프리터나 다른 파일에서 이 모듈을 불러서 사용할 때는 거짓이 되어 if문 다음 문장이 수행되지 않는다.
if __name__ == "__main__":
    print(add(1,4))
    print(sub(4,2))