#include <iostream>

int main(void)
{
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i ++)
    {
        for (int j = 0; j < N - i; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}
