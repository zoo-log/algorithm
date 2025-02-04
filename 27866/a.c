#include <stdio.h>

int main(void)
{
    int b;
    char a[1000];
    for (int i = 0; i < 1000; i++)
    {
        scanf("%c", &a[i]);
        if (a[i] == '\n')
        {
            break;
        }
    }
    scanf("%d", &b);

    printf("%c", a[b-1]);

    return 0;
}
