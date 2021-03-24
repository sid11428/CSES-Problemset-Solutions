#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    long long n, c = 0;
    cin >> n;
    long long a[n];
    long long res = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < a[i])
        {
            res = a[i] - a[i + 1];
            c = c + res;
            a[i + 1] += res;
        }
    }
    cout << c;
}

// if a<b and we need update a such that it is atleast equal to b we need to add b-a to it. In the same way we check for adjacent elements and keep adding b-a to our counter and update the elements as per needed.