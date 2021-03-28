#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    unsigned long long n;
    cin >> n;
    vector<long long> v1, v2;

    if ((n * (n + 1)) % 4 == 0)
    {
        cout << "YES \n";
        if (n % 2 != 0)
        {
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);
            long long i = 4;
            long long c = (n - 3) / 4;
            while (c--)
            {
                v1.push_back(i++);
                v1.push_back(n--);
                v2.push_back(i++);
                v2.push_back(n--);
            }
        }
        else
        {
            v1.push_back(1);
            v1.push_back(4);
            v2.push_back(2);
            v2.push_back(3);
            long long i = 5;
            long long c = (n - 4) / 4;
            while (c--)
            {
                v1.push_back(i++);
                v1.push_back(n--);
                v2.push_back(i++);
                v2.push_back(n--);
            }
        }
        cout << v1.size() << "\n";
        for (unsigned long long i = 0; i < v1.size(); i++)
        {
            cout << v1[i] << " ";
        }
        cout << "\n";
        cout << v2.size() << "\n";
        for (unsigned long long i = 0; i < v2.size(); i++)
        {
            cout << v2[i] << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << "NO \n";
    }
    return 0;
}

// the sum of 1 to n should be even so that the division can happen
//for the division part for n=odd
//ex - 7   1 + 2 = 3 so 1 and 2 in set 1 and 3 in set 2 now for the reason of the numbers 4 5 6 7, 4 plus 7= 5 plus 6

//for n=even
//add 1 and 4 in set 1 and 2 and 3 in set 2 and make pairs
