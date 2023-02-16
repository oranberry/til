# 🎈 with문과 함께 사용하기
# with문은 파일을 열고 닫는 것을 자동으로 처리할 수 있음

f = open("foo.txt", 'w')
f.write("Life is too short, you need python")
f.close()

# with문을 사용하면 with 블록을 벗어나는 순간 열린 파일 객체 f가 자동으로 close되어 편리하다. 
with open('foo.txt', 'w') as f:
    f.write("Life is too short, you need python")