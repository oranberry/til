# 💫 구조체를 활용한 연결 리스트 (Linked List)

**Linked list** - the most fundamental linked data structure  
Dynamically allocated structures play a big role in C programming, since they can be linked together to form lists, trees, and other highly flexible data structures.

A linked list consists of a chain of structures (called **nodes**), with each node containing a pointer to the next node in the chain. The last node in the list contains a null pointer(NULL).

A linked list is more flexible than an array: we can easily insert and delete nodes in a linked list, allowing the list to grow and shrink as needed. On the other hand, we lose the “random access” capability of an array: Any element of an array can be accessed in the same amount of time. But, accessing a node in a linked list is fast if the node is close to the beginning of the list, slow if it’s near the end.

사용자에게 몇 개의 숫자를 사용할 것인지 묻지 않으려면 메모리를 한 번에 할당하지 않고 사용자가 숫자를 입력할 때마다 그 숫자를 저장하는 동적 메모리를 하나씩 늘려가는 방법을 사용하면 된다. 그런데 이 방법을 사용하려면 동적으로 할당된 메모리의 주소 값을 저장하기 위해 그 개수만큼 포인터가 있어야 한다.
포인터가 늘어나면 '포인터1'과 '포인터2' 사이에도 서로 연결 고리가 있어야 연결이 유지된다. 그런데 '포인터1'이 사용자가 입력한 숫자를 저장한 메모리인 '숫자1'을 가리키면 포인터는 1개의 대상만 가리킬 수 있기 때문에 '포인터2'를 가리킬 수 없다. 그래서 숫자1과 포인터2를 각각 별개의 메모리로 할당하지 않고 👉🏻하나의 메모리로 묶어서 동적으로 할당👈🏻하면 간단하게 해결할 수 있다.  
**포인터1 -> 숫자1, 포인터2 -> 숫자2, 포인터3**  
이런 방법을 사용하면 사용자가 숫자를 입력할 때마다 숫자와 포인터를 한 쌍으로 동적 할당하면서 계속 저장할 수 있다. 이런 형식으로 자료를 관리하는 방법을 연결 리스트(Linked-list)라고 한다.

프로그램을 만들 때 데이터의 개수를 예상할 수 없어서 저장할 공간을 크게 확보했는 데 데이터가 1~2개만 저장된다면 낭비가 심하게 된다. 그렇다고 메모리를 적게 확보하면 저장할 공간이 부족해서 소스 코드를 수정해야 하는 문제가 생긴다. 이런 문제를 해결할 수 있는 자료 구조가 바로 연결 리스트(Linked-list)이며, 데이터를 저장할 때 데이터의 개수를 예상할 수 없고 그 범위가 너무 넓을 때 사용한다.
