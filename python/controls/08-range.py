# 🎈 range 함수
# for문은 숫자 리스트를 자동으로 만들어 주는 range 함수와 함께 사용하는 경우가 많다. 

# range(10)은 0부터 10 미만의 숫자를 포함하는 range 객체를 만들어준다.
a = range(10) # 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
# 시작 숫자와 끝 숫자를 지정하려면 range(시작숫자, 끝숫자) 형태를 사용하는데, 이때 끝 숫자는 포함되지 않는다.
a = range(1, 11) # 1, 2, 3, 4, 5, 6, 7, 8, 9, 10


# 1부터 10까지 더하기
# range(1, 11)은 숫자 1부터 10까지의 숫자를 데이터로 갖는 객체이고
# i 변수에 리스트의 숫자가 1부터 10까지 하나씩 차례로 대입되면서 문장을 반복적으로 수행한다
add = 0
for i in range(1, 11):
    add = add + i
print(add)
# 55


# 60점 이상인 사람에게는 축하 메세지를 보내고 나머지 사람에게는 아무 메세지도 전하지 않기
marks = [90, 25, 67, 45, 80]
for number in range(len(marks)):
    if marks[number] < 60: continue
    print("%d번 학생 합격을 축하합니다." %(number+1))
# range(len(marks))는 range(5)가 된다. 0, 1, 2, 3, 4


# for문과 range 함수를 사용하여 1부터 100까지 더해보기
add = 0
for i in range(1, 101):
    add = add + i
print(add)


# for와 range를 사용한 구구단
# for와 range 함수를 사용하면 소스 코드 단 4줄만으로 구구단을 출력할 수 있다.
for i in range(2, 10):
    for j in range(1, 10):
        print(i*j, end=" ")
    print('')
# 매개변수 end를 넣어 준 이유는 해당 결괏값을 출력할 때 다음 줄로 넘기지 않고 그 줄에 계속해서 출력하기 위해서이다.
# 마지막 print('')는 2단, 3단 등을 구분하기 위해 두 번째 for문이 끝나면 결과값을 다음 줄부터 출력하게 해주는 문장이다.