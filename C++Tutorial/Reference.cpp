#include <bits/stdc++.h>

using namespace std;

void add1(int &a)
{
    a++;
}

int main()
{
    int a = 10;
    add1(a);
    cout << a << endl;
    return 0;
}