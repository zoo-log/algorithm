#include <iostream>
#include <algorithm>

long long int arr[2000001];

int main(void)
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int N, M;
    std::cin >> N >> M;

    int total = N + M;

    for (int i = 0; i < total; i++)
    {
        std::cin >> arr[i];
    }
    
    std::sort(arr, arr + total);

    std::cout << arr[0];

    for (int i = 1; i < total; i++)
    {
        std::cout << " " << arr[i];
    }

    return 0;
}
