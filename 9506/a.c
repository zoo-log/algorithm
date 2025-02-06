#include <stdio.h>

int main(void)
{
    int n, sum = 0, tmp = 0;
    int arr[100];
    for (;;)
    {
        sum = 0;
        tmp = 0;

        for (int i = 0; i < 100; i++)
        {
            arr[i] = 0;
        }

        scanf("%d", &n);

        if (n == -1)
        {
            break;
        }

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                arr[tmp++] = i;
                sum += i;
            }
        }
        if (sum != n)
        {
            printf("%d is NOT perfect.\n", n);
        }
        else
        {
            printf("%d = ", n);
            for (int i = 0; i < tmp - 1; i++)
            {
                printf("%d + ", arr[i]);
            }
            printf("%d\n", arr[tmp-1]);
        }

    }

    return 0;
}
