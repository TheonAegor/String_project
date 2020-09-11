#include "MyString.h"

int strlen(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
       if (str[i] == '\0')
           return i;
    }
    return i;
}
