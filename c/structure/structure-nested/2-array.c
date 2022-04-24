// 💫 Arrays of Structures
// One of the most common combinations of arrays and structures is an array whose elements are structures.
// This kind of array can serve as a simple database.

// An array of part structures capable of storing information about 100 parts:
struct part inventory[100];

// Accessing a part in the array is done by using subscripting:
print_part(inventory[i]);

// Accessing a member within a part structure requires a combination of subscripting and member selection:
inventory[i].number = 883;

// To change the name stored in inventory[i] to an empty string:
inventory[i].name[0] = '\0';
