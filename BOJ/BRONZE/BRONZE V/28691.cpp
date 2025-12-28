#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char input;
    cin >> input;

    if (input == 'M')
    {
        printf("MatKor");
    }
    else if (input == 'W')
    {
        printf("WiCys");
    }
    else if (input == 'C')
    {
        printf("CyKor");
    }
    else if (input == 'A')
    {
        printf("AlKor");
    }
    else if (input == '$')
    {
        printf("$clear");
    }
    return 0;
}
