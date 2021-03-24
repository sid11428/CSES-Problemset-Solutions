#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int result = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        result = 2 * result % (1000000007);
    }
    cout << result;
    return 0;
}

//the only doubt u can have here is the modulo part i suggest reading about it from somewhere.