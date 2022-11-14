#include <stdio.h>

int main()
{
    // a
    // b
    // char a, b, c, d;
    // scanf("%c", &a);
    // scanf("%c", &b);
    // scanf("%c", &c);
    // scanf("%c", &d);
    // // printf("ASCII \'\\n\' = %d\n", '\n');
    // printf("a: %c, b: %d, c: %c, d: %d\n", a, b, c, d);

    // a
    // b
    // scanf("%c", &a);
    // scanf(" %c", &b);
    // printf("a: %c, b: %c\n", a, b);

    // int month, day, year;
    // // 12/31/2019
    // scanf("%d/%d/%d", &month, &day, &year);
    // printf("month: %d, day: %d, year: %d\n", month, day, year);

    // char s[100] = {'\0'};
    // scanf("%[abc]", &s);
    // printf("f: %s\n", s);
    // scanf("%[a-z]", &s);
    // printf("f: %s\n", s);
    // scanf("%[a-zA-Z0-9]", &s);
    // printf("f: %s\n", s);
    // scanf("%[^abc]", &s);
    // printf("f: %s\n", s);
    // scanf("%[^a-z]", &s);
    // printf("f: %s\n", s);
    // scanf("%[^a-zA-Z0-9]", &s);
    // printf("f: %s\n", s);

    // scanf("%*[^@]@%s", &s);
    // printf("f: %s\n", s);

    // int numOfInput = 0;
    // scanf("%d%n", &numOfInput, &numOfInput);
    // printf("f: %d\n", numOfInput);

    int a, b, c, d;
    int cnt = scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("f: %d\n", cnt);

    return 0;
}