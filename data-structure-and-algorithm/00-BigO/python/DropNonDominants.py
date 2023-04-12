# Big O Simplifaction technique: "Drop Non-Dominants"
# O(n^2) + O(n) = O(n^2 + n)
# n^2 is the dominant term and that stand alone n is the non-dominant term
# We can simplify O(n^2 + n) by dropping non-dominants => O(n^2)
def print_items(n):
    # O(n^2)
    for i in range(n):
        for j in range(n):
            print(i, j)
    # O(n)
    for k in range(n):
        print(k)


print_items(10)
