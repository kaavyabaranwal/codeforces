 // https://codeforces.com/problemset/problem/228/A
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int count, main_count = 0, arr[4];
   

    for (int j = 0; j < 4; j++)
    {
        cin >> arr[j];
    }
    for (int j = 0; j < 4; )
    {
        count = 0;
        for (int i = j + 1; i < 4; i++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 0)
            main_count++;

        j++;
    }

    cout << 4 - main_count;
}
