#include <bits/stdc++.h>

using namespace std;

int *fib(int n)
{
    int *f = new int[n];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < n; i++)
        f[i] = f[i - 1] + f[i - 2];

    return f;
}

int main()
{
    int n;
    cin >> n;
    int *f = fib(n);
    for (int i = 0; i < n; i++)
        cout << f[i] << " ";
    delete[] f; // free the f array
    // delete f; // free the f pointer
    return 0;
}