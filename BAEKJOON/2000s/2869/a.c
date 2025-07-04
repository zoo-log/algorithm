#include <stdio.h>

int main(void)
{
    int day = 0;
    long long A,B,V;
    scanf("%lld %lld %lld", &A, &B, &V);

    if ( (V - B) % (A - B) != 0)
    {
        day ++;
    }

    day += (V - B) / (A - B);

    printf("%d", day);

    return 0;
}
