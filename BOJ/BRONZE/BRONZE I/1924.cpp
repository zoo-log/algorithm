#include <iostream>

int main(void)
{
    int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::string week[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int x, y;
    std::cin >> x >> y;

    int sum = y;
    for (int i = 0; i < x - 1; i++)
    {
        sum += day[i];
    }

    std::cout << week[sum % 7];
}
