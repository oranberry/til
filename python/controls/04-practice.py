# 커피 자판기 프로그램
coffee = 10
while True:
    money = int(input("돈을 넣어주세요: "))
    if money == 300:
        print("커피주기")
        coffee -= 1
    elif money > 300:
        print("거스름돈 %d를 주고 커피주기" %(money-300))
        coffee -= 1
    else:
        print("돈을 돌려주고 커피 주지 않기")
        print("남은 커피 %d개"  %coffee)
    if coffee == 0:
        print("커피 품절. 판매 중지")
