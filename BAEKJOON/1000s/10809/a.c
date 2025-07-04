#include <stdio.h>

int main(void)
{
    int n, l = 0;
    char c[100];

    for (n = 0; n < 100; n++)
    {
        scanf("%c", &c[n]);
        
        if (c[n] == '\n')
        {
            break;
        }
    }

    for (char a = 'a'; a <= 'z'; a++)
    {
        l = 0;
        for (int i = 0; i < n; i++)
        {
            if (a == c[i])
            {
                printf("%d ", i);
                l++;
                break;
            }
        }
        if (l == 0)
        {
            printf("-1 ");
        }
    }

    return 0;
}
