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
        String operator+(const String &rhs);
        String &operator=(const String &rhs);
        char * GetString() const;
        int GetLen() const { return itsLen; }

    private:
        char * itsString;
        int itsLen;
};



#endif
