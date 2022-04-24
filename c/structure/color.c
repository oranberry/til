// Suppose we wish to store information about colors defined by three pieces of data:
// red(an int), green(an int), and blue(an int)
// Each piece is an integer in the range of 0 to 255.
// Write a program that declares a struct named color.

#include <stdio.h>
struct color
{
    int red;
    int green;
    int blue;
} black = {0, 0, 0};

struct color brighter(struct color c);
struct color make_color(int red, int green, int blue);

// In main function, declare a variable magenta of type struct color with the initial values: 255, 0, 255.
// Display the values of megenta's members using the "." operators.
// In main function, declare a struct color variable color2
// Read in color2's three members using scanf
// Display the values of color2's members using the "." operators.
int main()
{
    struct color white = {255, 255, 255};
    struct color magenta = {255, 0, 255};
    struct color color2, color3, color4;

    color2 = make_color(-5, 357, 93);
    color4 = make_color(255, 215, 0); // gold
    color3 = brighter(color4);        // brighter_gold

    printf("%d %d %d\n", color2.red, color2.green, color2.blue);
    printf("%d %d %d\n", color3.red, color3.green, color3.blue);

    return 0;
}

// 1. Add the following functions:
// struct color make_color(int red, int greeen, int blue);
// Returns a color structure containing the specified red, green, and blue values.
// If any argument is less than zero, the corresponding member will contain zero instead.
// If any argument is greater then 255, the corresponding member will contain 255.
struct color make_color(int red, int green, int blue)
{
    struct color c;

    if (red < 0)
        red = 0;
    if (red > 255)
        red = 255;
    if (green < 0)
        green = 0;
    if (green > 255)
        green = 255;
    if (blue < 0)
        blue = 0;
    if (blue > 255)
        blue = 255;

    c.red = red;
    c.green = green;
    c.blue = blue;

    return c;
}

// 2. Add the following functions:
// struct color brighter(struct color c);
// Returns a color structure that represents a brighter version of the color c:
// each member has been divied by 0.7
// If dividing by 0.7 causes a member to exceed 255, it is reduced to 255
struct color brighter(struct color c)
{
    struct color c2;

    if (c.red == 0)
        c.red = 3;
    if (c.green == 0)
        c.green = 3;
    if (c.blue == 0)
        c.blue = 3;

    c2.red = (c.red / 0.7 > 255) ? 255 : (int)(c.red / 0.7);
    c2.green = (c.green / 0.7 > 255) ? 255 : (int)(c.green / 0.7);
    c2.blue = (c.blue / 0.7 > 255) ? 255 : (int)(c.blue / 0.7);

    return c2;
}