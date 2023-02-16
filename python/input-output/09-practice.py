# Q1. 주어진 자연수가 홀수인지 짝수인지 판별해 주는 함수(is_odd)를 작성
def is_odd(number):
    if number % 2 == 1:
        return True
    else:
        return False

print(is_odd(3))
print(is_odd(4))

is_odd = lambda x: True if x % 2 == 1 else False
print(is_odd(3))


# Q2. 입력으로 들어오는 모든 수의 평균 값을 계산해 주는 함수를 작성해보자. 
# 입력으로 들어오는 수의 개수는 정해지지 않음 -> *args 사용
def avg_numbers(*args):
    result = 0
    for i in args:
        result += i
    return result / len(args)

print(avg_numbers(1, 2))
print(avg_numbers(1, 2, 3, 4, 5))


# Q3. 두 개의 숫자를 입력받아 더하여 돌려주는 프로그램
# 입력은 항상 문자열이므로 숫자로 바꿔서 계산해야 한다.
input1 = input("첫번째 숫자: ")
input2 = input("두번째 숫자: ")
total = input1 + input2
print("두 수의 합은 %s 이다" %total)

# 수정1
input1 = int(input("첫번째 숫자: "))
input2 = int(input("두번째 숫자: "))
total = input1 + input2
print("두 수의 합은 %d 이다" %total)

# 수정2
input1 = input("첫번째 숫자: ")
input2 = input("두번째 숫자: ")
total = int(input1) + int(input2)
print("두 수의 합은 %s 이다" %total)


# Q4. 다음 중 출력 결과가 다른 것 한 개 골라보기
# 콤마가 있는 경우 공백이 삽입되어 더해진다. 
print("you" "need" "python")
print("you"+"need"+"python")
print("you","need","python") # ✅
print("".join(["you","need","python"]))


# Q5. "test.txt" 파일에 "Life is too short" 문자열을 저장한 후 다시 그 파일을 읽어서 출력하는 프로그램
# f1 = open("test.txt", 'w')
# f1.write("Life is too short")

# f2 = open("test.txt", 'r')
# print(f2.read())

# 파일을 닫지 않은 상태에서 다시 열면 파일에 저장한 데이터를 읽을 수 없다. 
# 따라서 열린 파일 객체를 close로 닫아준 후 다시 열어서 파일의 내용을 읽어야 한다. 
# 수정1
f1 = open("test.txt", 'w')
f1.write("Life is too short")
f1.close()

f2 = open("test.txt", 'r')
print(f2.read())
f2.close()

# 수정2
# close를 명시적으로 할 필요 없는 with구문을 사용할 수 도 있다. 
with open('test.txt', 'w') as f1:
    f1.write("Life is too short")
with open('test.txt', 'r') as f2:
    print(f2.read())


# Q6. 사용자의 입력을 파일에 저장하는 프로그램 작성 (기존 작성 내용 유지하고 새로 입력한 내용 추가)
user_input = input("저장할 내용 입력: ")
f = open('test.txt', 'a')
f.write(user_input)
f.write('\n')
f.close()


# Q7. 파일의 내용 중 'java'라는 문자열을 'python'으로 바꾸어서 저장
# 파일을 모두 읽은 후에 문자열의 replace 함수를 사용하여 java라는 문자열을 python으로 변경한 다음 저장한다. 
f = open('test.txt', 'r')
body = f.read()
f.close()

body = body.replace('java', 'python')

f = open('test.txt', 'w')
f.write(body)
f.close()