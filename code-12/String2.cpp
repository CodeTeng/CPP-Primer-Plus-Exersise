#include <cstring>
#include <cctype>
#include "String2.h"
using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}

String::String(const char *s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num_strings++;
}

String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String &s)
{
    len = s.len;
    str = new char[len + 1];
    strcpy(str, s.str);
    num_strings++;
}

String::~String()
{
    delete[] str;
    --num_strings;
}

String &String::operator=(const String &s)
{
    if (this != &s)
    {
        delete[] str;
        len = s.len;
        str = new char[len + 1];
        strcpy(str, s.str);
    }
    return *this;
}

String &String::operator=(const char *s)
{
    delete[] str;
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    return *this;
}

char &String::operator[](int i)
{
    return str[i];
}

const char &String::operator[](int i) const
{
    return str[i];
}

bool operator<(const String &st1, const String &st2)
{
    return strcmp(st1.str, st2.str) < 0;
}

bool operator>(const String &st1, const String &st2)
{
    return strcmp(st1.str, st2.str) > 0;
}

bool operator==(const String &st1, const String &st2)
{
    return strcmp(st1.str, st2.str) == 0;
}

ostream &operator<<(ostream &os, const String &st)
{
    os << st.str;
    return os;
}

istream &operator>>(istream &is, String &st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

String String::operator+(const char *s)
{
    int length = strlen(s) + len;
    char *temp = new char[length + 1];
    strcpy(temp, str);
    strcat(temp, s);
    String newStr(temp);
    delete[] temp;
    return newStr;
}

String operator+(const char *s, const String &st)
{
    int length = strlen(s) + st.len;
    char *temp = new char[length + 1];
    strcpy(temp, s);
    strcat(temp, st.str);
    String newStr(temp);
    delete[] temp;
    return newStr;
}

String operator+(const String &st1, const String &st2)
{
    int length = st1.len + st2.len;
    char *temp = new char[length];
    strcpy(temp, st1.str);
    strcat(temp, st2.str);
    String newStr(temp);
    delete[] temp;
    return newStr;
}

void String::Stringlow()
{
    for (int i = 0; i < len; i++)
        str[i] = tolower(str[i]);
}

void String::Stringupper()
{
    for (int i = 0; i < len; i++)
        str[i] = toupper(str[i]);
}

int String::charCount(const char ch) const
{
    int count = 0;
    for (int i = 0; i < len; i++)
        if (str[i] == ch)
            count++;
    return count;
}