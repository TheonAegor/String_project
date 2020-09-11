#include "MyString.h"

void ShowMassOfChar(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        std::cout << str[i];
    }
    std::cout << std::endl;
}

String::String(int len)
{
	int i;

	std::cout << "\tString(int)\n";
    itsLen = len;
    itsString = new char[itsLen + 1];
    for (i = 0; i < len; i++)
            itsString[i] = '\0';
	itsString[i] = '\0';
	std::cout << "\tEnd of String(int)\n";
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
    String temp(itsLen + rhs.GetLen());

 //   this->itsLen = this->itsLen + rhs.GetLen();
    std::cout << "\n\tThis is start of + operator\n";
    for (j = 0;j < this->itsLen; j++)
        temp[j] = itsString[j];
    for (i = 0; i < rhs.GetLen(); i++, j++)
        temp[j] = rhs.GetString()[i];
    temp[j] = '\0';
    std::cout << temp.GetString() << std::endl;
    std::cout << "\tThis is end of + operator\n\n";
    return temp;
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
char & String::operator[](int index)
{
    return itsString[index];
}

char String::operator[](int index) const
{
   return itsString[index]; 
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

   temp = str + str2;
   Show(temp);
    Show(str2 + str);
    Show(str);
    std::cout << str[0] << std::endl;
//    Show(temp);

    std::cout << "This is end of main\n";

}
