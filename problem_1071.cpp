#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int sum = 0;

    for (int i = y+1; i < x; i++)
    {
        if (i % 2 != 0)
        {
            //cout << i << " ";
            sum = sum + i;
        }
    }
    cout << sum << endl;
}