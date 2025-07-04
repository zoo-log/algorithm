#include <stdio.h>

int main(void)
{
    int sum = 0, n = 0, space = 0;
    char c;
    for (;;)
    {
        scanf("%c", &c);

        if (c == '\n')
        {
            if (space == 1)
            {
                sum--;
            }
            break;
        }

        if (c == ' ')
        {
            if (n == 0)
            {

            }
            else
            {
                sum ++;
            }
            space = 1;
        }
        else
        {
            space = 0;
        }
        n++;
    }

    printf("%d", sum+1);


    return 0;
}
