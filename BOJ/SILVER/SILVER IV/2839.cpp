#include <iostream>
#include <algorithm>

using namespace std;

int dp [5001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    dp[3] = 1;
    dp[5] = 1;

    for (int i = 6; i <= n; i++)
    {
        if (dp[i-3] != 0)
        {
            dp[i] = dp[i-3] + 1;
        }
        if (dp[i-5] != 0)
        {
            dp[i] = dp[i] ?  min(dp[i], dp[i-5] + 1) : dp[i-5] + 1;
        }
    }

    cout << (dp[n] != 0 ? dp[n] : -1) << '\n';

    return 0;
}
