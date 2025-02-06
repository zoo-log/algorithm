#include <stdio.h>

int main(void)
{
    int x,y,w,h, min = 1000;
    int a[4];
    scanf("%d %d %d %d", &x, &y, &w, &h);

    a[0] = x;
    a[1] = y;
    a[2] = w - x;
    a[3] = h - y;

    for (int i = 0; i < 4; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("%d", min);

    return 0;
}
