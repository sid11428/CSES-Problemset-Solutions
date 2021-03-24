#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, y, x, n;
    cin >> t;
    while (t--)
    {
        cin >> y >> x;
        if (x > y)
        {
            if (x % 2 == 0)
            {
                n = (x - 1) * (x - 1) + y;
            }
            else
            {
                n = (x * x) - y + 1;
            }
        }
        else
        {
            if (y % 2 == 0)
            {
                n = (y * y) - x + 1;
            }
            else
            {
                n = (y - 1) * (y - 1) + x;
            }
        }
        cout << n << "\n";
    }
    return 0;
}
