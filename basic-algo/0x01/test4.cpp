#include <bits/stdc++.h>

using namespace std;

int ans1_Olgn (int N)
{
    int i;
    for (i = 1; i <= N; i *= 2) {}
    return (i / 2);
}

int main()
{
    int N;
    cin >> N;

    cout << ans1_Olgn(N) << endl;
    return 0;
}