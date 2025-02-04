#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    char N[100];
    int B, len, sum = 0;
    scanf("%s %d", N, &B);
    len = strlen(N);

    for (int i = 0; i < len; i++)
    {
        if (N[i] <= 57)
        {
            sum += (N[i] - 48) * pow(B, len - 1 - i);
        }
        else
        {
            sum += (N[i] - 55) * pow(B, len - 1 - i);
        }
    }

    printf("%d", sum);

    return 0;
}
