#include <stdio.h>

int main()
{
    char a[100];
	int N, B, i = 0;
	scanf("%d %d", &N, &B);

    while (N  > 0)
    {
        if (N % B >= 10)
        {
            a[i++] = 'A' + ((N % B) - 10);
        }
        else
        {
            a[i++] = '0' + ( N % B);
        }
        N /= B;
    }

    for (int j = i -1; j >= 0; j--)
    {
        printf("%c", a[j]);
    }
}
