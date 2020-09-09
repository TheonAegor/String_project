#include "string.h"

String::String(char *str)
{
    int len;
    int i ;

    std::cout << "Construstor in use\n";
    len = strlen(str);
    itsString = new char[len+1];
    itsLen = len;
    std::cout << "str itsLen = " << itsLen << std::endl;
    for (i = 0; i < len; i++)
    {
        itsString[i] = str[i];
    }
    itsString[i] = '\0';
}

String::String(const String & rhs)
{
    int i;

    std::cout << "Copy constructor in use\n";
    this->itsString = new char[rhs.GetLen()];
    std::cout << "this->itsLen = " << rhs.GetLen() << std::endl;
    for (i = 0; i < rhs.GetLen(); i++)
       itsString[i] = (rhs.GetString()[i]); 
}

char * String::GetString() const 
{
    return itsString;
}

void Show(String rhs)
{
    int i;

    for (i = 0; i < rhs.GetLen(); i++)
        std::cout<< rhs.GetString()[i];
    std::cout << "This is Show() function\n";
    std::cout << std::endl;
}

int main()
{
    char words[] = {"hello world"};
    String str(words);

    Show(str);
    std::cout << "This is end of main\n";

}
