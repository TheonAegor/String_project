# ifndef STRING_H
#define STRING_H

#include <iostream>

int strlen(char *);

class String
{
    public:
        String() {}
        String(char *str);
        char * GetString();

    private:
        char * itsString;
};



#endif
