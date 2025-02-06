#include <stdio.h>

int main(void)
{
    int x, cnt = 0, tmp, a = 0, b = 1;
    scanf("%d", &x);

    for(;;)
    {
        if ( (cnt * (cnt - 1)) / 2 < x && (cnt * (cnt + 1)) / 2 >= x)
        {
            break;
        }
        else
        {
            cnt++;
        }
    }

    a = cnt;
    tmp = x - (((cnt * (cnt - 1)) / 2)+ 1);

    if (cnt % 2 == 0)
    {
        printf("%d/%d",1 + tmp ,cnt - tmp);
    }
    else
    {
        printf("%d/%d", cnt - tmp, 1 + tmp);
    }

    return 0;
}
