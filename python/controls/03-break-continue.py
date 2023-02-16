# 🎈 while문 강제로 빠져나가기 - break
coffee = 10
money = 300
while money:
    print("커피있음")
    coffee = coffee - 1
    print("남은 커피: %d개" %coffee)
    if coffee == 0:
        print("커피없음")
        break


# 🎈 while문의 맨 처음으로 돌아가기 - continue
# 1부터 10까지의 숫자 중에서 홀수만 출력하는 예
a = 0
while a < 10:
    a += 1
    if a % 2 == 0: continue
    print(a)


# 1부터 10까지의 숫자 중에서 3의 배수를 뺀 나머지 값을 출력하는 예
a = 0
while a < 10:
    a += 1
    if a % 3 == 0: continue
    print(a)