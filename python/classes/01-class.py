# ✨ 클래스(class)
# 클래스란 똑같은 무엇인가를 계속해서 만들어 낼 수 있는 설계 도면(ex.과자틀)이고
# 객체(object)란 클래스로 만든 피조물(ex.과자 틀을 사용해 만든 과자)을 뜻한다. 
# 클래스로 만든 객체는 객체마다 고유한 성격을 가지기 때문에 서로 전혀 영향을 주지 않는다. 

class Calculator:
    # 클래스 안에 구현된 함수는 다른 말로 메서드(method)라고 부른다.  
    # 메서드의 첫 번째 매개변수 self에는 메서드를 호출한 객체가 자동으로 전달되기 때문에 
    # 파이썬 메서드의 첫 번째 매개변수 이름은 관례적으로 self를 사용한다. 
    def __init__(self):
        self.result = 0
    
    def add(self, num):
        self.result += num
        return self.result
    
    def sub(self, num):
        self.result -= num
        return self.result

# 클래스를 사용하면 계산기 대수가 늘어나도 객체를 생성만 하면 되기 때문에 함수를 사용하는 경우와 달리 매우 간단해진다. 
# Calculator 클래스로 만든 별개의 계산기 cal1, cal2(객체)
cal1 = Calculator()
cal2 = Calculator()

# 계산기(cal1, cal2)의 결괏값이 다른 계산기의 결괏값과 상관없이 독립적인 값을 유지!
# 객체를 통해 클래스의 메서드를 호출하려면 도트(.)연산자를 사용
print(cal1.add(3)) # 3
print(cal1.add(4)) # 7

print(cal2.add(3)) # 3
print(cal2.add(7)) # 10


# 🎈 객체와 인스턴스의 차이
# 클래스로 만든 객체를 인스턴스라고도 한다. 
class Cookie:
    pass

# a는 객체이고 a는 Cookie의 인스턴스
# 즉, 인스턴스라는 말은 특정 객체(a)가 어떤 클래스(Cookie)의 객체인지를 관계 위주로 설명할 때 사용
a = Cookie()