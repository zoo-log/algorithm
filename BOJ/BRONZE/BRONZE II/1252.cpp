#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int num[161];

int main(void)
{
    string a, b;
    cin >> a >> b;

    int zf = 0, sf = 0;

    if (a.length() < b.length())
    {
        string tmp = a;
        a = b;
        b = tmp;
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int a_len = a.length();
    int b_len = b.length();

    for (int i = 0; i < a_len; i++)
    {
        if (i < b_len)
        {
            num[i] += (a[i] - '0') + (b[i] - '0'); 
        }
        else
        {
            num[i] += a[i] - '0';
        }

        if (num[i] >= 2)
        {
            num[i] -= 2;
            num[i+1]++;
        }
    }


    for (int i = 0; i < a_len + 1; i++)
    {
        zf += num[i];
    }

    if (zf == 0)
    {
        cout << '0';
        return 0;
    }

    for (int i = a_len + 1; i >= 0; i--)
    {
        if (num[i] == 1)
        {
           sf = 1;
        }
        if (sf == 1)
        {
            cout << num[i];
        }
    }

    return 0;
}
