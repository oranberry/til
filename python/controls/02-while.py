# ✨ 제어문(Control Flow) - while문
# while문은 반복해서 문장을 수행해야 할 경우 사용. 반복문이라고도 부른다.

# 예시) 열 번 찍어 안 넘어가는 나무 없다
treeHit = 0
while treeHit < 10:
    treeHit = treeHit + 1 # treeHit += 1
    print("나무를 %d번 찍었습니다." %treeHit)
    if treeHit == 10:
        print("나무 넘어갑니다.")
# treeHit가 10보다 작은 동안에 while문 안의 문장을 게속 수행


# number가 4가 아닌 동안 prompt를 출력하고 사용자로부터 번호를 입력받는다. 
# 사용자가 값 4를 입력하지 않으면 계속해서 prompt 출력
prompt = """
1. Add
2. Del
3. List
4. Quit

Enter number: """

number = 0
while number != 4:
    print(prompt)
    number = int(input()) # 사용자의 숫자 입력
