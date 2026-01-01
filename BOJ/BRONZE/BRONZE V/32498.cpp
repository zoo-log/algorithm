#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, d, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
       cin >> d;
       if (d % 2 != 0)
       {
           cnt++;
       }
    }

    cout << cnt;

    return 0;
}
