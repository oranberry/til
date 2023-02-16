# 🎈 원소 접근
# 원소의 인덱스는 0부터 시작!
import numpy as np

X = np.array([[51, 55], [14, 19], [0, 4]])
print(X)
# [[51 55]
#  [14 19]
#  [ 0  4]]
print(X[0])
# [51 55]
print(X[0][1])
# 55

# for문으로 각 원소에 접근할 수 있다.
for row in X:
    print(row)
# [51 55]
# [14 19]
# [0 4]

# 인덱스를 배열로 지정해 한 번에 여러 원소에 접근할 수도 있다. 
X = X.flatten() # X를 1차원 배열로 변환(평탄화)
print(X) # [51 55 14 19 0 4]

# 인덱스가 0, 2, 4인 원소 얻기
print(X[np.array([0, 2, 4])]) # [51 14 0]

# 배열에서 15이상인 값만 구하기
# 넘파이 배열에 부등호 연산자를 사용한 결과는 bool 배열
print(X>15) # [ True  True False  True False False]
# bool 배열을 사용해 배열X에서 True에 해당하는 원소를 꺼낼 수 있다.
print(X[X>15]) # [51 55 19]