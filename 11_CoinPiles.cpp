#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        long long max = std::max(a, b);
        long long min = std::min(a, b);
        if ((a + b) % 3 == 0 && (max <= (2 * min)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}