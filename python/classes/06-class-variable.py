# 🎈 클래스 변수
# 클래스 안에 선언한 변수를 클래스 변수라고 한다. 
# 클래스 변수는 클래스로 만든 모든 객체에 공유된다는 특징이 있다. 

class Family:
    # 클래스 변수
    lastname = "kim"

# 클래스이름.클래스변수
print(Family.lastname) # kim

# 클래스로 만든 객체를 통해서도 클래스 변수를 사용할 수 있다. 
a = Family()
b = Family()
print(a.lastname) # kim
print(b.lastname) # kim

# 클래스 변수 값을 변경하면 클래스로 만든 객체의 값이 모두 변경
Family.lastname = "park"
print(a.lastname) # park
print(b.lastname) # park