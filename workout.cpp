#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int a = 0, b = 0, c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 1)
        {
            a += arr[i];
        }
        else if (i % 3 == 2)
        {
            b += arr[i];
        }
        else
        {
            c += arr[i];
        }
    }
    if ((a > b) && (a > c))
    {
        cout << "chest" << endl;
    }
    else if ((b > a) && (b > c))
    {
        cout << "biceps" << endl;
    }
    else
    {
        cout << "back" << endl;
    }
}