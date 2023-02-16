# 이미지 표시하기
# pyplot에는 이미지를 표시해주는 메서드인 imshow()가 있다.
# 이미지를 읽어들일 떄는 matplotlib.image 모듈의 imread() 메서드를 이용한다. 
 
import matplotlib.pyplot as plt
from matplotlib.image import imread

img = imread('python/images/fig 1-5.png') # 이미지 읽어오기
plt.imshow(img)

plt.show()
