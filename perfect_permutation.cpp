#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    if (n % 2 != 0)
        cout << -1;

    else
    {
        for (; n > 0;)
        {
            cout << n << " ";
            n--;
        }
    }
}
