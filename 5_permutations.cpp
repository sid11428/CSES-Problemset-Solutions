#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int i, n;
    cin >> n;
    if (n == 1)
        cout << 1 << " ";
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        for (i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
}

// print all even numbers then odd numbers or vice versa upto n.