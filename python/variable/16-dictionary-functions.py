# 딕셔너리 관련 함수
# 🎈 keys() - Key 리스트 만들기
# 딕셔너리의 Key만 모아서 dict_keys 객체를 돌려준다.
a = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
print(a.keys()) # dict_keys(['name', 'phone', 'birth'])

for k in a.keys():
    print(k)

# 리스트로 변환시
print(list(a.keys())) # ['name', 'phone', 'birth']


# 🎈 values() - Value 리스트 만들기
# 딕셔너리의 Value만 모아서 dict_values 객체를 돌려준다. 
print(a.values()) # dict_values(['pey', '0119993323', '1118'])


# 🎈 items() - Key, Value 쌍 얻기 
# items 함수는 Key와 Value의 쌍을 튜플로 묶은 값을 dict_items 객체로 돌려준다.
print(a.items()) # dict_items([('name', 'pey'), ('phone', '0119993323'), ('birth', '1118')])


# 🎈 get() - Key로 Value 얻기
# get(x) 함수는 x라는 Key에 대응되는 Value를 돌려준다.
a = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
print(a.get('name')) # a['name']와 동일한 결괏값
print(a.get('phone')) # a['phone']와 동일한 결괏값
print(a.get('email')) # 찾는 Key가 없으면 None 반환

# 존재하지 않는 키로 값을 가져올 경우 Key 오류를 발생시키고 None(거짓)을 돌려준다. 
# 딕셔너리 안에 찾으려는 Key 값이 없을 경우 미리 정해 둔 디폴트 값을 대신 가져오게 하고 싶을 때에는
# get(x, '디폴트 값')을 사용한다.
print(a.get('email', 'bar')) # bar


# 🎈 in - 해당 Key가 딕셔너리 안에 있는 지 확인하기
a = {'name':'pey', 'phone':'0119993323', 'birth':'1118'}
find = 'name' in a
print(find) # True
find = 'email' in a
print(find) # False


# 🎈 clear() - Key: Value 쌍 모두 지우기
# 딕셔너리 안의 모든 요소를 삭제한다. 
a.clear()
print(a) # {}