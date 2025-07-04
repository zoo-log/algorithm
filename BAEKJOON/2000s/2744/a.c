#include <stdio.h>
#include <string.h>

int main(void)
{
    int len;
    char arr[100];
    scanf("%s", arr);

    len = strlen(arr);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] < 97)
        {
            printf("%c", arr[i] + 32);
        }
        else
        {
            printf("%c", arr[i] - 32);
        }
    }

    return 0;
}
