# 🎈 브로드캐스트
# 넘파이에서는 형상이 다른 배열끼리도 계산할 수 있다. 이러한 기능을 브로드캐스트(broadcast)라고 한다.

# 1차원 배열인 B가 2차원 배열 A와 같은 형상으로 변형된 후 원소별 연산이 이루어짐 (images/fig 1-2.png)
import numpy as np

A = np.array([[1, 2], [3, 4]])
B = np.array([10, 20])
print(A*B)
# [[10 40]
#  [30 80]]
