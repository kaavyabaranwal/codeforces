
// https://codeforces.com/problemset/problem/1703/A


#include <iostream>
#include <vector>
using namespace std;
string tolowerfunc(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (65 <= str[i] && str[i] <= 90)
            str[i] = str[i] + 32;
    }
    return str;
}
int main()
{
    vector<string> v;
    int n;
    cin >> n;

       for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < n; i++)
    {
        if (tolowerfunc(v[i]) == "yes")
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
