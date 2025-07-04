#include <stdio.h>

int main(void)
{
    int N, sum, v, tmp;
    int a[201] = {0, };
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &tmp);
        a[tmp+100]++;
    }

    scanf("%d", &v);
    printf("%d", a[v+100]);

    return 0;
}
