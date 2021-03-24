#include <iostream>
using namespace std;

int main()
{
    long long n, k = 1;
    cin >> n;
    while (k <= n)
    {
        long long result = ((k * k) * (k * k - 1)) / 2 - 4 * (k - 1) * (k - 2);
        cout << result << "\n";
        k += 1;
    }
    return 0;
}