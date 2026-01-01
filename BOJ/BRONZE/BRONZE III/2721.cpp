#include <iostream>

using namespace std;

long long int sum(int a)
{
    int tmp = 0;
    for (int i = 0; i <= a; i++)
    {
        tmp += i;
    }
    return tmp;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n = 0;
    long long int cnt = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cnt = 0;
        for (int j = 1; j <= n; j++)
        {
            cnt += j * sum(j+1);
        }
        cout << cnt << '\n';

    }
    return 0;
}
