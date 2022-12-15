#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    v.pop_back();
    cout << v.size() << endl;
    return 0;
}