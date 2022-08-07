#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;

    for (int i = 0; i < n;)
    {
        if (str[i] == str[i + 1])
        {
            if (str[i] == 'a'){
                str[i] = 'b';
                count++;
                i = i + 2;
            }

            else if (str[i] == 'b'){
                str[i] = 'a';
                count++;
                i = i + 2;
                }
        }
        else i=i+2;
        
    }
    cout << count <<endl;
    cout << str;
}
