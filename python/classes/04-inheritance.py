# 🎈 클래스의 상속
# 클래스의 상속(Inheritance)이란 어떤 클래스를 만들 때 다른 클래스의 기능을 물려받을 수 있게 만드는 것이다. 
# 상속은 기존 클래스를 그대로 놔둔 채 클래스의 기능을 확장시킬 때 주로 사용한다. 
# 클래스를 상속하기 위해서는 클래스 이름 뒤 괄호 안에 상속할 클래스 이름을 넣어주면 된다. 
# class 클래스이름 (상속할 클래스이름)

class FourCal:
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

# (예시)상속 개념을 사용하여 FourCal 클래스에 a^b(a의 b제곱) 기능 추가하기
class MoreFourCal(FourCal):
    def pow(self):
        result = self.first ** self.second
        return result

# MoreFourCal 클래스는 FourCal 클래스를 상속했으므로 FourCal 클래스의 모든 기능을 사용할 수 있어야 한다. 
a = MoreFourCal(4, 2)
print(a.add()) # 6
print(a.mul()) # 8
print(a.sub()) # 2
print(a.div()) # 2.0

print(a.pow()) # 16