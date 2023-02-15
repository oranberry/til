# 자주 사용하는 숫자 처리 함수
# 1️⃣ abs(number) - 절댓값
# the number can be interger, floating number, complex number
print(abs(-5)) # 5


# 2️⃣ pow(number, power, modulus(optional)) - 제곱
print(pow(4, 2)) # 4^2=16
print(pow(2, -2)) #2^-2=(1/2)^2=0.25
print(pow(7, 2, 5)) # compute 4^2%5=4


# 3️⃣ max() - 최댓값
print(max(5, 12)) # 12

numbers = [3, 2, 8, 5, 10, 6]
largest_number = max(numbers)
print("The largest number is:", largest_number)


# 4️⃣ min() - 최솟값
print(min(5, 12)) # 5

numbers = [9, 34, 11, -4, 27]
smallest_number = min(numbers)
print("The smallest number is:", smallest_number)


# 5️⃣ round(number, digits(optional)) - 반올림
# digits is the number of decimals to use when rounding the number. Default is 0
print(round(3.14)) # 3
print(round(4.99)) # 5
print(round(5.76543, 2)) # 5.77


# 6️⃣ floor() - 내림
# import math
# math.floor(x)
# return the largest integer not greater than x
from math import * 
print(floor(4.99)) # 4


# 7️⃣ ceil() - 올림
# import math
# math.ceil(x)
# return smallest integer not less than x
print(ceil(3.14)) # 4


# 8️⃣ sqrt() - 제곱근
# import math
# math.sqrt(x)
# return the square root of the number
print(sqrt(16)) # 4