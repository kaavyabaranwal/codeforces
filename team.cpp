// https://codeforces.com/problemset/problem/231/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x, y, z, count, main_count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        cin >> x >> y >> z;
        if (x == 1)
            count++;
        if (y == 1)
            count++;
        if (z == 1)
            count++;

        if (count > 1)
            main_count++;
    }

    cout << main_count ;
}
