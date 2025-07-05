#include <iostream>

int main(void)
{
    int N;
    std::cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i == N)
        {
            for (int j = 0; j < 2 * N - 1; j++)
            {
                std::cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < N - i; j++)
            {
                std::cout << " ";
            }
            std::cout << "*";

            if (i != 1)
            {
                for (int k = 0; k < 2 * i  - 3; k++)
                {
                    std::cout << " ";
                }
                std::cout <<"*";
            }
        }

        std::cout <<"\n";
    }

    return 0;
}
