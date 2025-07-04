#include <stdio.h>
#include <string.h>

int main(void)
{
    int w;
    int a[3], b[3];
    scanf("%1d%1d%1d %1d%1d%1d", &a[0], &a[1], &a[2], &b[0], &b[1], &b[2]);

    for (int i = 2; i >= 0; i--)
    {
        if (a[i] > b[i])
        {
            w = 0;
            break;
        }
        if (a[i] < b[i])
        {
            w = 1;
            break;
        }
    }

    switch (w) 
    {
        case 0:
            printf("%d%d%d", a[2],a[1],a[0]);
            break;
        case 1:
            printf("%d%d%d", b[2],b[1],b[0]);
            break;
    }
    return 0;
}
