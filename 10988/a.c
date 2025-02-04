#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[101], b[101];
    scanf("%s", a);
    int c = 0, len = strlen(a);

    for (int i = 0; i < len; i++)
    {
        b[i] = a[len-i-1];
    }

    for (int i = 0; i < len; i++)
    {
        if (a[i] == b[i])
        {
            c++;
        }
    }

    if (len == c)
    {
        printf("1"); 
    }
    else 
    {
        printf("0");
    }

    return 0;
}
