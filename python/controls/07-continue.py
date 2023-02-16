# 🎈 for문과 continue문
# for문 안의 문장을 수행하는 도중에 continue문을 만나면 for문의 처음으로 돌아가게 된다.

# 60점 이상인 사람에게는 축하 메세지를 보내고 나머지 사람에게는 아무 메세지도 전하지 않기
marks = [90, 25, 67, 45, 80]
number = 0
for mark in marks:
    number += 1
    if mark < 60: continue
    print("%d번 학생 합격을 축하합니다." %number)