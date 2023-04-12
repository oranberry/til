# Example of O(1)
# The most efficient Big O time complexity
# As n increases, the number of operations is going to remain constant.
# O(1) is also called "Constant" time.
# 참고! O(log n) is called "Divide and Conquer"

# O(1)
# only operation is one addition for any input
def add_items(n):
    return n + n


print(add_items(10))


# only two addition operations for any input
# Even if we have two operations here, the number of operations will remain constant as n increases.
# O(2) -> O(1)
def add_items(n):
    return n + n + n


print(add_items(10))
