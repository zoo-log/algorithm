#include <iostream>
#include <string>

int main(void)
{
    std::string ISBN;
    std::cin >> ISBN;

    int StarLocation = ISBN.find('*');
    int sum = 0;

    for (int i = 0; i < 13; i++)
    {
        if (i == StarLocation)
        {
            continue;
        }

        if (i % 2 == 0)
        {
            sum += ISBN[i] - '0';
        }
        else
        {
            sum += 3 * (ISBN[i] - '0');
        }
    }

    int weight = 1;

    if (StarLocation % 2 == 1)
    {
       weight = 3; 
    }
    
    for (int i = 0; i < 10; i++)
    {
        if ((sum + (weight * i)) % 10 == 0)
        {
            std::cout << i << '\n';
            break;
        }
    }
    return 0;
}
