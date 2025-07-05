#include <iostream>

int main(void)
{
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        int a, b;
        char comma;
        std::cin >> a >> comma >> b;
        std::cout << a + b << "\n";
    }

    return 0;
}
