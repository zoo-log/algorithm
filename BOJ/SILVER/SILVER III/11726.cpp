#include <iostream>

using namespace std;

long long dp[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    dp[1] = 1; dp[2] = 2; dp[3] = 3;

    int n;
    cin >> n;
    
    for (int i = 4; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }

    cout << dp[n] % 10007;

    return 0;
}
