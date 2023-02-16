# ✨ 제어문(Control Flow) - for문
# while문과 비슷한 for문은 매우 유용하고 문장 구조가 한눈에 쏙 들어온다는 장점이 있다.
# for문의 기본 구조: for 변수 in 리스트(또는 튜플, 문자열): 수행할 문장


# 전형적인 for문
test_list = ['one', 'two', 'three']
for i in test_list:
    print(i)
# one
# two
# three


# 다양한 for문의 사용
a = [(1,2),(3,4),(5,6)]
for (first, last) in a:
    print(first + last)
# 3
# 7
# 11


# for문의 응용
# 총 5명의 학생이 시험을 보았는데 시험 점수가 60점이 넘으면 합격이고 그렇지 않으면 불합격일 때
# 합격인지 불합격인지 결과 보여주기

marks = [90, 25, 67, 45, 80] # 1번 학생 - 90점, 5번 학생 - 80점
number = 0
for mark in marks:
    number += 1
    if mark >= 60:
        print("%d번 학생 합격" %number)
    else:
        print("%d번 학생 불합격" %number)
