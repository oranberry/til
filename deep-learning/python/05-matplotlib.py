# matplotlib: 그래프를 그려주는 라이브러리
# matplotlib를 사용하면 그래프 그리기와 데이터 시각화를 쉽게 할 수 있다. 
# 실험 결과를 시각화 하거나 딥러닝 실행 과정 중간 데이터를 시각적으로, 즉 눈으로 확인할 수 있다. 

# 단순한 그래프 그리기
# 그래프를 그리려면 matplotlib의 pyplot 모듈을 이용한다.
# sin 함수를 그리는 예시
import numpy as np
import matplotlib.pyplot as plt

# 데이터 준비
x = np.arange(0, 6, 0.1) # 0에서 6까지 0.1 간격으로 생성
y = np.sin(x)

# 그래프 그리기
plt.plot(x, y)
plt.show()

# 위의 코드에서는 넘파이의 arange 메서드로 [0, 0.1, 0.2, ..., 5.8, 5.9]라는 데이터를 생성하여 변수 x에 할당
# 그 다음 줄에서는 x의 각 원소에 넘파이의 sin 함수인 np.sin()을 적용하여 변수 y에 할당
# x와 y를 인수로 plt.plot 메서드를 호출해 그래프를 그린다. 
# plt.show()를 호출해 그래프를 화면에 출력하고 끝