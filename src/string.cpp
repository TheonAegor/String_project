#include "string.h"

void ShowMassOfChar(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        std::cout << str[i];
    }
    std::cout << std::endl;
}

String::String(char *str)
{
    int len;
    int i ;

    std::cout << "\tConstrustor in use\n";
    len = strlen(str);
    itsString = new char[len+1];
    itsLen = len;
    for (i = 0; i < len; i++)
    {
        itsString[i] = str[i];
    }
    itsString[i] = '\0';
//    ShowMassOfChar(itsString);
}

String::String(const String & rhs)
{
    int i;

    std::cout << "\tCopy constructor in use\n";
    this->itsLen = rhs.GetLen();
    this->itsString = new char[rhs.GetLen() + 1];
//    std::cout << rhs.GetString()[1] << std::endl;
    for (i = 0; i < rhs.GetLen(); i++)
       this->itsString[i] = rhs.GetString()[i]; 
    this->itsString[i] = '\0';
}

String String::operator+(const String &rhs)
{
    int i;
    int j;
    char temp[itsLen + 1];

 //   this->itsLen = this->itsLen + rhs.GetLen();
    std::cout << "\n\tThis is start of + operator\n";
    for (i = 0; i < this->itsLen; i++)
        temp[i] = itsString[i];
    temp[i] = '\0';
    delete [] this->itsString;
    this->itsString = 0;
    this->itsString = new char[this->itsLen + rhs.GetLen() + 1];
    for (j = 0; j < this->itsLen; j++)
        this->itsString[j] = temp[j];
    for (int i = 0; i < rhs.GetLen(); i++, j++)
    {
        this->itsString[j] = rhs.GetString()[i];
    }
    this->itsString[j] = '\0';
    std::cout << this->itsString << std::endl;
    std::cout << "\tThis is end of + operator\n\n";
    return *this;
}

String &String::operator=(const String &rhs)
{
    int i;

    delete [] itsString;
    itsLen = rhs.GetLen();
    itsString = new char[itsLen + 1];
    for (i = 0; i < itsLen; i++)
        itsString[i] = rhs.GetString()[i];
    itsString[i] = '\0';
    return *this;
}

char * String::GetString() const 
{
    return itsString;
}

void Show(String rhs)
{
    int i;
    std::cout << "\tThis is Show() function\n";
    for (i = 0; i < rhs.GetLen(); i++)
        std::cout<< rhs.GetString()[i];
    std::cout << "\n";
    std::cout << "\tThis end is Show() function\n";
    std::cout << std::endl;
}

int main()
{

    std::cout << "This start of main\n\n";
    char words[] = {"hello world"};
    char lol[] = {" ololo"};
    String str(words);
    String str2(lol);
    String temp;

    str2 = str;
    Show(str2);
    Show(str);
//    Show(temp);

    std::cout << "This is end of main\n";

}
