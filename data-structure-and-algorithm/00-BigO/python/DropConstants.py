# Big O Simplifaction technique: "Drop Constants"
# The code below runs n + n = 2n times
# We can simplify O(2n) by dropping the constant = O(n)
# It doesn't matter if it's O(10n), O(100n), ...
def print_items(n):
    for i in range(n):
        print(i)

    for j in range(n):
        print(j)


print_items(10)
