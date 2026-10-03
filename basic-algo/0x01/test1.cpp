#include <bits/stdc++.h>

using namespace std;

int sum_On (int N)
{
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0 || i % 5 == 0) sum += i;
    }
    return sum;
}

int sum_O1 (int N)
{
    int sum = (3 + (N / 3 * 3)) * (N / 3) / 2 + (5 + (N / 5 * 5)) * (N / 5) / 2 - (15 + (N / 15 * 15)) * (N /15) / 2;
    return sum;
}

int main()
{
    int N;
    cin >> N;

    cout << sum_On(N) << endl;
    cout << sum_O1(N) << endl;
}