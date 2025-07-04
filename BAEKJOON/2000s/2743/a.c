#include <stdio.h>

int main(void)
{
    int sum = 0;
    char c;

    for (int i = 0; i < 100; i++)
    {
        scanf("%c", &c);
        if (c == '\n')
        {
            break;
        }
        else
        {
            sum++;
        }
    }

    printf("%d", sum);

    return 0;
}
