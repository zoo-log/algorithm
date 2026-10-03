#include <bits/stdc++.h>

using namespace std;

int ans1_Orootn (int N)
{
    for (int i = 1; i * i <= N; i++)
    {
        if (i * i == N) return 1;
    }
    return 0;
}
int main(void)
{
    int N;
    cin >> N;

    cout << ans1_Orootn(N) << endl;
}