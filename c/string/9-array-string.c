// 💫 Arrays of Strings
// To create an array of strings with initial values, use a two-dimensional array of characters, with one string per row:
char planets[][8] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune"};

// The number of rows in the array can be omitted, but ⚠️ C requires that we specify the number of columns.

// The planets array contains a fair bit of wasted space (extra null characters), but it can be modified:
planets[0][2] = ‘k’;

// We can also create array in C by whose elements are string literals (read only):
char *planets[] = {"Mercury", "Venus", "Earth",
                   "Mars", "Jupiter", "Saturn",
                   "Uranus", "Neptune"};

// To access one of the planet names, all we need do is subscript the planets array.
// A loop that prints the planets array:
for (i = 0; i < 8; i++)
    printf("%s\n", planets[i]);

// An array of strings is defined as:
char *planets[] = {"Mercury", "Venus", "Earth",
                   "Mars", "Jupiter", "Saturn",
                   "Uranus", "Neptune", "Pluto"};

// What’s the value of planets[3]?

// An array of strings is defined as:
char *planets[] = {"Mercury", "Venus", "Earth",
                   "Mars", "Jupiter", "Saturn",
                   "Uranus", "Neptune", "Pluto"};

// What’s the value of planets[2][2]?