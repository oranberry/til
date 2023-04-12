# Example of O(n^2)
# O(n^2) is also called "Loop within a Loop" time.
# It runs n * n = n^2 times
def print_items(n):
    for i in range(n):
        for j in range(n):
            print(i, j)


print_items(10)
