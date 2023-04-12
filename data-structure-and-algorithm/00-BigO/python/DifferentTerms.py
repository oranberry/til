# Different Terms For Inputs
# O(a) + O(b) = O(a + b)

def print_items(a, b):
    # O(a)
    for i in range(a):
        print(i)
    # O(b)
    for j in range(b):
        print(j)


print_items(1, 10)


# O(a * b)
def print_items(a, b):
    for i in range(a):
        for j in range(b):
            print(j)


print_items(1, 10)
