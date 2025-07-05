#include <iostream>

int main(void)
{
    std::string input;
    std::cin >> input;

    int length = input.length();

    for (int i = 0; i < length; i++)
    {
        if (i != 0 && i % 10 == 0)
        {
            std::cout << "\n";
        }  
        std::cout << input[i];
    }
    return 0;
}
