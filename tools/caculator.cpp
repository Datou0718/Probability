#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a = 0;
    for (double i = 1; i <= 12; i++)
    {
        a += double(12) / i;
    }
    cout << a;
    return 0;
}