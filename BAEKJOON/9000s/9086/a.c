#include <stdio.h>

int main(void)
{
    int T, j;
    char c[1000];

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("\n");
        for (j = 0; j < 1000; j++)
        {
            scanf("%c", &c[j]);
            if (c[j] == '\n')
            {
                break;
            }
        }
        printf("%c%c", c[0], c[j-1]);
    }
    return 0;
}
