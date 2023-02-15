# 🎈 딕셔너리 관련 함수
# 1️⃣ keys() - Key 리스트 만들기
# 딕셔너리의 Key만 모아서 dict_keys 객체를 돌려준다.
# dict_keys 객체는 리스트를 사용하는 것과 차이가 없지만, 리스트 고유의 append, insert, pop, remove, sort 함수는 수행할 수 없다. 
a = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
print(a.keys()) # dict_keys(['name', 'phone', 'birth'])

for k in a.keys():
    print(k)
# name
# phone
# birth

# 리스트로 변환시
print(list(a.keys())) # ['name', 'phone', 'birth']


# 2️⃣ values() - Value 리스트 만들기
# 딕셔너리의 Value만 모아서 dict_values 객체를 돌려준다. 
# dict_values 객체와 dict_items 객체 역시 dict_keys 객체와 마찬가지로 리스트를 사용하는 것과 동일하게 사용할 수 있다. 
print(a.values()) # dict_values(['pey', '0119993323', '1118'])

# 리스트로 변환시
print(list(a.values())) # ['pey', '0119993323', '1118']


# 3️⃣ items() - Key, Value 쌍 얻기 
# items 함수는 Key와 Value의 쌍을 튜플로 묶은 값을 dict_items 객체로 돌려준다.
# dict_values 객체와 dict_items 객체 역시 dict_keys 객체와 마찬가지로 리스트를 사용하는 것과 동일하게 사용할 수 있다. 
print(a.items()) # dict_items([('name', 'pey'), ('phone', '0119993323'), ('birth', '1118')])


# 4️⃣ get() - Key로 Value 얻기
# get(x) 함수는 x라는 Key에 대응되는 Value를 돌려준다.
a = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
print(a.get('name')) # a['name']와 동일한 결괏값 = pey
print(a.get('phone')) # a['phone']와 동일한 결괏값 = 0119993323
print(a.get('email')) # 찾는 Key가 없으면 None 반환
# a['email']과 동일하지 않다. 존재하지 않는 키로 값을 가져오려고 할 경우 오류 발생 

# 존재하지 않는 키로 값을 가져올 경우 Key 오류를 발생시키고 None(거짓)을 돌려준다. 
# 딕셔너리 안에 찾으려는 Key 값이 없을 경우 미리 정해 둔 디폴트 값을 대신 가져오게 하고 싶을 때에는
# get(x, '디폴트 값')을 사용한다.
print(a.get('email', 'bar')) # bar


# 5️⃣ in - 해당 Key가 딕셔너리 안에 있는 지 확인하기
a = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
find = 'name' in a
print(find) # True
find = 'email' in a
print(find) # False


# 6️⃣ clear() - Key: Value 쌍 모두 지우기
# 딕셔너리 안의 모든 요소를 삭제한다. 
a.clear()
print(a) # {}


# 7️⃣ pop() 
# 딕셔너리에서도 리스트와 마찬가지로 pop 함수를 사용할 수 있다 
# 딕셔너리 a에서 'B'에 해당하는 값 추출하기
a = {'A':90, 'B':80, 'C':70}
result = a.pop('B')
print(a)
print(result)