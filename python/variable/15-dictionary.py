# 🎈 딕셔너리(dictionary) 자료형
# 딕셔너리는 Key와 Value를 한 쌍으로 갖는 자료형
# 딕셔너리는 리스트나 튜플처럼 순차적으로(sequential) 해당 요솟값을 구하지 않고 Key를 통해 Value를 얻는다. 
# {Key1:Value1, Key2:Value2, Key3:Value3, ...}
# Key에는 변하지 않는 값을 사용하고, Value에는 변하는 값과 변하지 않는 값 모두 사용할 수 있다.
# 딕셔너리는 리스트나 튜플에 있는 인덱싱 방법을 적용할 수 었다. 

a = {} # 비어 있는 딕셔너리
a = {'a':[1, 2, 3]} # Value에 리스트도 가능
dic = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
print(dic['name'])
print(dic['phone'])
print(dic['birth'])
# print(dic['email']) ❌ 찾는 Key가 없는 경우에 KeyError -> 프로그램 종료!


# 딕셔너리 추가, 삭제
# 🎈 딕셔너리 추가하기
a = {1:'a'}

a[2] = 'b'
print(a) # {1: 'a', 2: 'b'}

a['name'] = 'pey'
print(a) # {1: 'a', 2: 'b', 'name': 'pey'}

a[3] = [1, 2, 3]
print(a) # {1: 'a', 2: 'b', 'name': 'pey', 3: [1, 2, 3]}

# Value 업데이트 가능
a['name'] = "earth"
print(a)


# 🎈 딕셔너리 삭제하기
del a[1]
print(a) # {2: 'b', 'name': 'pey', 3: [1, 2, 3]}


# 🎈 딕셔너리에서 Key를 사용해 Value 얻기
# 어떤 Key의 Value를 얻기 위해서는 "딕셔너리 변수 이름[Key]" 사용
grade = {'pey':10, 'julliet':99}
print(grade['pey']) # 10
print(grade['julliet']) # 99

a = {1:'a', 2:'b'}
# 딕셔너리 변수에서 [] 안의 숫자 1은 두 번째 요소를 뜻하는 것이 아니라 Key에 해당하는 1을 나타냄. 
print(a[1]) # 'a'
print(a[2]) # 'b'


# 💥 딕셔너리 만들 때 주의할 사항
# 딕셔너리에서 Key는 고유한 값이므로 중복되는 Key 값을 설정하면 하나를 제외한 나머지 모두 무시됨
a = {1:'a', 1:'b'}
print(a) # {1: 'b'}

# Key에는 리스트를 쓸 수 없다(오류 발생)
# 튜플은 Key로 쓸 수 있지만 딕셔너리의 Key로 쓸 수 있는지 없는 지는 Key가 변하는 값인지 아닌지에 달려있다.
# 리스트는 그 값이 변할 수 있기 때문에 Key로 쓸 수 없다. 
# 단, Value에는 변하는 값이든 변하지 않는 값이든 상관없이 아무 값이나 넣을 수 있다.
