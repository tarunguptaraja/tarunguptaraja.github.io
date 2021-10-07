#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n, r = 0, p = 0;
    cin >> n;
    char s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == 'A')
        {
            r++;
        }
        else
        {
            p++;
        }
    }
    if (r > p)
    {
        cout << "Anton";
    }
    else if (p > r)
    {
        cout <<"Danik";
    }
    else{
        cout<<"Friendship";
    }
}
