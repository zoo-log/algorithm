#include <iostream>

int main(void)
{
    int N;
    std::cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < N - i; j++)
        {
            std::cout << " ";
        }
        std::cout <<"*";

        for (int j = 0; j < 2 * i - 2; j++)
        {
            if (j % 2 == 0)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }

    return 0;
}
