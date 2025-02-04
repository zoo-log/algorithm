#include <stdio.h>

int main(void)
{
    int tmp, sum = 0;
    char c[16];
    for (int i = 0; i < 16; i++)
    {
        scanf("%c", &c[i]);
        if (c[i] == '\n')
        {
            break;
        }
    }
    for (int i = 0; c[i] != '\n'; i++)
    {
        tmp = c[i] - 'A';
        
            if (tmp >= 0 && tmp <= 2)
            {
                sum += 3;
            }
            if (tmp >= 3 && tmp <= 5)
            {
                sum += 4;
            }
            if (tmp >= 6 && tmp <= 8)
            {
                sum += 5;
            }
            if (tmp >= 9 && tmp <= 11)
            {
                sum += 6;
            }
            if (tmp >= 12 && tmp <= 14)
            {
                sum += 7;
            }
            if (tmp >= 15 && tmp <= 18)
            {
                sum += 8;
            }
            if (tmp >= 19 && tmp <= 21)
            {
                sum +=9;
            }
            if (tmp >= 22 && tmp <= 25)
            {
                sum += 10;
            }
        
    }
    
    printf("%d", sum);

}
