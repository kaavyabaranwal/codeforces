
// https://codeforces.com/contest/1722/problem/A

#include <iostream>
using namespace std;

bool is_present(string s, char a)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == a)
        {
            return true;
            count++;
        }
    }
    if (count == 0)
        return false;

    else
        return -1;
}

int main()
{
    int size;
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> size;
        char word[size];
        cin >> word;
        if (size != 5)
            cout << "NO" << endl;
        else
        {
            if (is_present(word, 'T') == true && is_present(word, 'i') == true && is_present(word, 'm') == true && is_present(word, 'u') == true && is_present(word, 'r') == true)
                cout << "yes" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
