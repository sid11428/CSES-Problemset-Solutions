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

//for 2 knights to be in attacking postion they have to be in grid of 2*3 or 3*2. to get our desired result subtract all possible 2 cross 3 and 3 cross 2 grids on a k*k chess board from all possible ways to put 2 knights of the chessboard