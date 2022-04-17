// ✨ Difference between array and structure ✨

//  ➰ Arrays
// All elements of an array have the same type
// To select an array element, we specify its position (as an integer subscript)
// Arrays can't be copied using the = operator

// ➰ Structure
// The elements of a structure (its members, in C) aren't required to have the same type
// The members of a structure have names; to select a particular member, we specify its name, not its position
// A structure is a logical choice for storing a collection of related data items.
// Members of a struct can be any previously defined type (arrays, other structs, pointers, ...)
// Structure can be copied using the = operator
// an array embedded within a structure is copied when the enclosing structure is copied.