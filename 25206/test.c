#include <stdio.h>

int main(void)
{
    char grade[2] = {'A', '+'};
    float tmp = 0.0;
    if (grade[1] == '+')
    {
        tmp += 0.5;
    }

    tmp += 69.0 - grade[0];

    printf("%f", tmp);

    return 0;
}
