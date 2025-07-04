#include <stdio.h>

int main(void)
{
    int a[8], c = 8;

    for (int i = 0; i  < 8; i++)
    {
        scanf("%d", &a[i]);
    }

    if (a[0] == 1)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (a[j-1] == j)
            {
                c++;
            }
            else
            {
                printf("mixed");
                break;
            }
        }
        if (c == 16)
        {
            printf("ascending");
        }
    }
    else if (a[0] == 8)
    {
        for (int j = 8; j > 0; j--)
        {
            if (a[8-j] == j)
            {
                c--;
            }
            else
            {
                printf("mixed");
                break;
            }
        }
        if (c == 0)
        {
            printf("descending");
        }
    }
    else 
    {
        printf("mixed");
    }
    
    return 0;
}
