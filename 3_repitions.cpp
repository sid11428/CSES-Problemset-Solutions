#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 1, max = 1;
    for (unsigned int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            c += 1;
        }
        else
        {
            c = 1;
        }
        if (c > max)
            max = c;
    }
    cout << max;
}

//keep checking adjacent elements updating a counter everytime a match is found.initializing counter with 1 because when a match is found we update counter by 1. example-- for the word aaa as per our code 2 times will the characters be checked but we need the count as 3.