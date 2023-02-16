# 🎈 프로그램 외부에 저장된 파일을 읽는 여러 가지 방법
# 1️⃣ readline 함수 사용
# 파일을 읽기 모드로 연 후 readline()을 사용해서 파일의 첫 번쨰 줄을 읽어 출력
f = open("newfile.txt", 'r')
line = f.readline()
print(line) # 1번째 줄입니다.
f.close()

# 모든 줄을 읽어서 화면에 출력하고 싶다면
# while True 무한 루프 안에서 f.readline()을 사용해 한줄씩 읽고 더 이상 읽을 줄이 없으면 break
# readline()은 더 이상 읽을 줄이 없을 경우 None을 출력한다. 
f = open("newfile.txt", 'r')
while True:
    line = f.readline()
    if not line: break
    print(line)
f.close()


# 2️⃣ readlines 함수 사용
# readlines() 함수는 파일의 모든 줄을 읽어서 각각의 줄을 요소로 갖는 리스트로 돌려준다. 
# lines = ["1번 째 줄입니다.", "2번 째 줄입니다.", ..., "10번 째 줄입니다."]
f = open("newfile.txt", 'r')
lines = f.readlines()
for line in lines:
    print(line)
f.close()


# 3️⃣ read 함수 사용
# f.read()는 파일의 내용 전체를 문자열로 돌려준다. 
f = open("newfile.txt", 'r')
data = f.read()
print(data)
f.close()