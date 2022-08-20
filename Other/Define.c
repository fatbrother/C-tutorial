#include <stdio.h>
#define MAX_LENGTH 10
#define string char*
#define print(...) printf("%s\n", __VA_ARGS__)
int main()
{
    string str = "Hello World";
    for (int i = 0; i < MAX_LENGTH; i++)
        print(str);
    return 0;
}