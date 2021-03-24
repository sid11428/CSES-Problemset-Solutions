#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    long long n = 0, s = 0, s2 = 0;
    cin >> n;
    int arr[n - 1];
    for (long long i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        s += arr[i];
    }
    s2 = (n * (n + 1)) / 2;
    cout << s2 - s;
}

//(sum of all numbers till n) - (sum of all numbers in array) = required number