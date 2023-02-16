# 🎈 입력값이 몇 개가 될지 모를 때는 어떻게 해야 할까?
# 일반적으로 볼 수 있는 함수 형태에서 괄호 안의 매개변수 부분을 *매개변수로 바꾼다.
# def 함수이름 (*매개변수): 수행할 문장

# 여러 개의 입력값을 모두 더하는 함수
# *args처럼 매개변수 이름 앞에 *을 붙이면 입력값을 모두 모아서 튜플로 만들어 준다.
def add_many(*args):
    result = 0
    for i in args:
        result = result + i # *args에 입력받은 모든 값 더하기
    return result

add_many(1, 2) # args는 (1, 2)가 된다. 
add_many(1, 2, 3) # args는 (1, 2, 3)가 된다. 
add_many(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) # args는 (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)가 된다. 

result = add_many(1, 2)
print(result) # 3
result = add_many(1, 2, 3)
print(result) # 6
result = add_many(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
print(result) # 55


# 또 다른 예시
def add_mul(choice, *args):
    if choice == "add":
        result = 0
        for i in args:
            result = result + i # args에 입력받은 모든 값 더하기
    elif choice == "mul":
        result = 1
        for i in args:
            result = result * i # args에 입력받은 모든 값 곱하기
    return result

result = add_mul('add', 1, 2, 3, 4, 5)
print(result) # 15
result = add_mul('mul', 1, 2, 3, 4, 5)
print(result) # 120


# 🎈 키워드 파라미터
# 매개변수 앞에 별 두 개(**)를 붙인다.
# 매개변수 이름 앞에 **을 붙이면 매개변수는 딕셔너리가 되고 모든 key=value 형태의 결괏값이 딕셔너리에 저장된다.
def print_kwargs(**kwargs):
    print(kwargs)

print_kwargs(a=1) # {'a': 1}
print_kwargs(name='foo', age=3) # {'name': 'foo', 'age': 3}
