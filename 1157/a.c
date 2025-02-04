#include <stdio.h>
#include <string.h>

int main(void)
{
    char a;
    int max = -1, b, c = 0, alp[26] = {0, };

    while(scanf("%c", &a) && a != '\n')
    {
        if (a >= 'a' && a <= 'z')
        {
            a -= 32;
        }
        alp[a-65]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alp[i] > max)
        {
            max = alp[i];
            b = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (alp[i] == max)
        {
            c++;
        }
    }

    if (c == 1)
    {
        printf("%c", b+65);
    }
    if (c > 1)
    {
        printf("?");
    }
    return 0;
}
