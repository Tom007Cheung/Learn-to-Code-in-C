#include <stdio.h>
#include <string.h>

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n'); // look for newline
        if (find)                // if the address is 
            *find = '\0';        //    not NULL, place a
        else                     // null character there
            while (getchar() != '\n')
                continue;         // dispose of reset of line
    }
    return ret_val;
}