import mod2

print(mod2.PI) # 3.141592

a = mod2.Math()
# 모듈 안에 있는 클래스를 사용하려면 .(도트 연산자)로 클래스 이름 앞에 모듈 이름을 먼저 입력
print(a.solv(2)) # 12.566368
print(mod2.add(mod2.PI,4.4)) # 7.541592

result = mod2.add(3,4)
print(result) # 7