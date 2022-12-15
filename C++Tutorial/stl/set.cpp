#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout << s.size() << endl;
    cout << s.count(5) << endl;
    cout << s.count(1) << endl;
    return 0;
}