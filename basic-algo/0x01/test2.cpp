#include <bits/stdc++.h>

using namespace std;

int ans_On2(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] + arr[j] == 100) return 1;
        }
    }
    return 0;
}

int main()
{
    int N = 4;
    int arr[] = {4, 13 ,63, 87};

    cout << ans_On2(arr, N);
}