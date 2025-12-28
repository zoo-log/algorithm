#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N, L;
    cin >> N >> L;

    int cnt = 0, ans = 0, max = 0;

    for (int i = 0; i < N; i++)
    {
        string stripe;
        cin >> stripe;

        cnt = 0;

        for (int j = 0; j < L; j++)
        {
            if (stripe[j] == '1')
            {
                if (j == 0 || stripe[j-1] == '0')
                {
                    cnt++;
                }
            }
        }

        if (cnt == max)
        {
            ans++;
        }
        else if (cnt > max)
        {
            max = cnt;
            ans = 1;
        }
    }

    cout << max << ' ' << ans;
    return 0;
}
