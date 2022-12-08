#include <stdio.h>

// #define NORTH 0
// #define SOUTH 1
// #define EAST 2
// #define WEST 3
#define string char*
enum direction { NORTH, SOUTH, EAST, WEST } dir;
string d[] = { "NORTH", "SOUTH", "EAST", "WEST" };
int main()
{
    for (dir = NORTH; dir <= WEST; dir++)
        printf("%s\n", d[dir]);
}