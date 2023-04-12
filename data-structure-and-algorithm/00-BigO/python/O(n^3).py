# Example of O(n^3)
# It runs n * n * n = n^3 times
def print_items(n):
    for i in range(n):
        for j in range(n):
            for k in range(n):
                print(i, j, k)


print_items(10)
