#include <bits/stdc++.h>

using namespace std;

int fre[101];

int ans_On (int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (fre[arr[i]] == 1) return 1; // 이런 식으로 안하고 그냥 바로 100 - arr[i] 를 비교하면 되는건데..
        fre[100 - arr[i]]++;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 2;
    //int arr[] = {4, 13, 63, 87};
    int arr[] = {50, 42};

    cout << ans_On(arr, N) << '\n';
    return 0;
}