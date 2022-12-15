#include <bits/stdc++.h>

using namespace std;

void add1(int &b)
{
    b++;
}

int main()
{
    int a = 10;
    add1(a);
    cout << a << endl;
    return 0;
}