# ifndef STRING_H
#define STRING_H

#include <iostream>

int strlen(char *);

class String
{
    public:
        String() {}
        String(char *str);
        String(const String &);
        char * GetString() const;
        int GetLen() const { return itsLen; }

    private:
        char * itsString;
        int itsLen;
};



#endif
