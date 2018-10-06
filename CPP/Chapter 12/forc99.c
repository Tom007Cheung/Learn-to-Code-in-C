/* forc99.c -- new C99 block rules */
#include <stdio.h>
// #include <stdlib.h>
int main()
{
    int n = 8;

    // printf("size of int is %zd in this mac\n", sizeof (int));

    printf("    Initially, n = %d at %p\n", n, &n);
    for (int n = 1; n < 3; n++)
        printf("    loop 1: n = %d at %p\n", n, &n);
    printf("After loop 1, n = %d at %p\n", n, &n);
    for (int n = 1; n < 3; n++)
    {
        printf(" loop 2 index n = %d at %p\n", n, &n);
        int n = 6;
        printf("    loop 2: n = %d at %p\n", n, &n);
        n++;
    }
    printf("After loop 2, n = %d at %p\n", n, &n);

    return 0;
}