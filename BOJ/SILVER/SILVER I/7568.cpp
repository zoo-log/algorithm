#include <iostream>

using namespace std;

int sz[2][51], ranking[51];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> sz[0][i] >> sz[1][i];
    }

    for (int i = 0; i < N; i++)
    {
        ranking[i] = 1;
        for (int j = 0; j < N; j++)
        {
            if (sz[0][i] < sz[0][j] && sz[1][i] < sz[1][j])
            {
                ranking[i]++;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << ranking[i] << " ";
    }

    return 0;
}
