#include <stdio.h>
#include <string.h>

void fit (char *string, unsigned int size)
{
    if (strlen(string) > size)
        string[size] = '\0';
}
