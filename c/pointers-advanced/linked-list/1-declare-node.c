// 💫 연결 리스트의 노드를 구조체로 선언하기 (Declaring a Node Type)
// 연결 리스트에서 숫자와 포인터를 함께 저장하기 위해 할당한 메모리를 노드(node)라고 부른다.
// 연결 리스트는 이 노드를 연결해서 데이터를 관리하기 때문에 노드에 해당하는 메모리를 어떻게 구성할지 먼저 결정해야 한다.

// To set up a linked list, we'll need a structure that represents a single node.
// A node structure will contain data (an integer in this example)
// plus a pointer to the next node in the list:
struct node
{
    int value;         // data stored in the node
    struct node *next; // pointer to the next node
};

// Notice that the next member has type struct node *,
// which means that it can store a pointer to a node structure

// Now that we have the node structure declared, we'll need a way to keep track of where the list begins.
// In other words, we'll need a variable that always points to the first node in the list.
// Let's name the variable first:
struct node *first = NULL; // indicates that the list is initially empty.