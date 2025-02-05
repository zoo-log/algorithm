#include <stdio.h>

int main(void)
{
    int T, a;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &a);

        printf("%d %d %d %d\n", (a / 25), (a % 25) / 10, ((a % 25) % 10) / 5, ((a % 25) % 10) % 5);
    }

    return 0;
}
