#include <bits/stdc++.h>

using namespace std;

class MyString 
{
public:
    MyString(const char* cstr = 0);
    int length() { return strlen(m_data); }

private:
    char* m_data;
};

MyString::MyString(const char* cstr)
{
    if (cstr) {
        m_data = new char[strlen(cstr) + 1];
        strcpy(m_data, cstr);
    } else {
        m_data = new char[1];
        *m_data = '\0';
    }
}

int main()
{
    MyString str("Hello");
    cout << str.length() << endl;
}