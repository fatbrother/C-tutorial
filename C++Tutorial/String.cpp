#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "World";
    cout << s1 + " " + s2 << endl;
    cout << s1.length() << endl;
    cout << s1[0] << endl;
    cout << s1.substr(1, 3) << endl;
    cout << s1.find("el") << endl;
    if (s1 > s2)
        cout << "s1 is greater than s2" << endl;
    else
        cout << "s2 is greater than s1" << endl;
    if (s1 == s2)
        cout << "s1 is equal to s2" << endl;
    else
        cout << "s1 is not equal to s2" << endl;
    return 0;
}