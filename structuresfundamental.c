#include <stdio.h>

// Define a structure for a Point with x and y coordinates
struct Point {
    int x;
    int y;
};

int main() {
    // Declare and initialize a Point structure
    struct Point p1;
    p1.x = 10;
    p1.y = 20;

    // Access and print the values of the Point structure
    printf("Coordinates of p1: x = %d, y = %d\n", p1.x, p1.y);

    // We can also declare and initialize a structure in one line
    struct Point p2 = {5, 15};
    printf("Coordinates of p2: x = %d, y = %d\n", p2.x, p2.y);

    return 0;
}
