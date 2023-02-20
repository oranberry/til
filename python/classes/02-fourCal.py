# 사칙연산 클래스 예시

class FourCal:
    # setdata 메서드: 두 숫자 입력받기
    def setdata(self, first, second):
        self.first = first
        self.second = second
    # add 메서드: 더하기 기능
    def add(self):
        result = self.first + self.second
        return result
    # mul 메서드: 곱하기 기능
    def mul(self):
        result = self.first * self.second
        return result
    # sub 메서드: 빼기 기능
    def sub(self):
        result = self.first - self.second
        return result
    # div 메서드: 나누기 기능
    def div(self):
        result = self.first / self.second
        return result


# setdata 메서드는 매개변수로 self, first, second 3개 입력값을 받는다.
# 그런데 실제로는 2개 값만 전달한 이유는? setdata 메서드의 첫 번째 매개변수 self에는 setdata 메서드를 호출한 객체 a가 자동으로 전달
# 객체를 호출할 때 호출한 객체 자신이 전달되기 때문에 self를 사용한 것이다. 
a = FourCal()
a.setdata(4, 2) # a -> self, 4 -> first, 2 -> second
print(a.first)  # 4
print(a.second) # 2

b = FourCal()
b.setdata(3, 8)
print(b.first) # 3
# 💥 클래스로 만든 객체의 객체변수는 다른 객체의 객체변수와 상관없이 독립적인 값을 유지한다. 

print(a.add()) # 6
print(a.mul()) # 8
print(a.sub()) # 2
print(a.div()) # 2.0

print(b.add()) # 11
print(b.mul()) # 24
print(b.sub()) # -5
print(b.div()) # 0.375