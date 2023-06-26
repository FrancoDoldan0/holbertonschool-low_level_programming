#include <stdio.h>
#include "main.h"

char
*leet(char *s)
{
    int a, b;
    char ch[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
    char num[10] = {'3', '3', '4', '4', '0', '0', '7', '7', '1', '1'};

    for (a = 0; s[a != '\0']; a++)
    {
        for (b = 0; b < 10; b++)
        {
            if (s[a] == ch[a])
            {
                s[a] = num[b];
            }
        }
    }
    return (s);
}