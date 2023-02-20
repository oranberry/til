# 🎈 생성자(Constructor)
# 생성자란 객체가 생성될 때 자동으로 호출되는 메서드를 의미한다. 
# 파이썬 이름으로 __init__를 사용하면 이 메서드는 생성자가 된다. 

class FourCal:
    def setdata(self, first, second):
        self.first = first
        self.second = second
    def add(self):
        result = self.first + self.second
        return result
    def mul(self):
        result = self.first * self.second
        return result
    def sub(self):
        result = self.first - self.second
        return result
    def div(self):
        result = self.first / self.second
        return result

a = FourCal()
# a.add() ❌
# FourCal 클래스의 인스턴스 a에 setdata 메서드를 수행하지 않고 add 메서드를 수행하면 AttributeError
# setdata 메서드를 수행해야 객체 a의 객체변수 first와 second가 생성되기 때문
# 이렇게 객체에 초깃값을 설정해야 할 필요가 있을 때는 setdata와 같은 메스드를 호출하여 초깃값을 설정하기보다는 생성자를 구현하는 것이 안전하다. 

class FourCal:
    # 생성자 구현
    # __init__ 메서드는 생성자로 인식되어 객체가 생성되는 시점에 자동으로 호출된다. 
    def __init__(self, first, second):
        self.first = first
        self.second = second
    def setdata(self, first, second):
        self.first = first
        self.second = second
    def add(self):
        result = self.first + self.second
        return result
    def mul(self):
        result = self.first * self.second
        return result
    def sub(self):
        result = self.first - self.second
        return result
    def div(self):
        result = self.first / self.second
        return result

# a = FourCal() ❌ 생성자 __init__이 호출되어 오류 발생
# 생성자의 매개변수 first와 second에 해당하는 값이 전달되지 않았기 때문에!

# first와 second에 해당하는 값을 전달하여 객체 생성해야한다.
a = FourCal(4, 2)
print(a.first) # 4
print(a.second) # 2

print(a.add()) # 6
print(a.div()) # 2.0