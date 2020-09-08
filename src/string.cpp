#include "string.h"

String::String(char *str)
{
    int len;
    int i ;

    len = strlen(str);
    itsString = new char[len+1];
    for (i = 0; i < len; i++)
    {
        itsString[i] = str[i];
    }
    itsString[i] = '\0';
}

char * String::GetString()
{
    return itsString;
}

int main()
{
    char words[] = {"hello world"};
    String str(words);
    std::cout << "This is end of main\n";
}
