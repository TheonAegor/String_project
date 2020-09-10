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
        char operator[](int) const;
        char & operator[](int);
        char * GetString() const;
        int GetLen() const { return itsLen; }

    private:
        String(int);
        char * itsString;
        int itsLen;
};



#endif
