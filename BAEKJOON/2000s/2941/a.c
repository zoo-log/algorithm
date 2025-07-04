#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 0, a = 0, l;
    char ch[100];

    scanf("%s", ch);
    l = strlen(ch);

    for (int i = 0; i < l; i++) 
    {
        if (ch[i] == 'c')
        {
            if (ch[i+1] == '=' || ch[i+1] == '-')
            {
                i++;
                a++;
            }
            else
            {
                a++;
            }
        }

        else if (ch[i] == 'd')
        {
            if (ch[i+1] == '-')
            {
                i++;
                a++;
            }

            else if (ch[i+1] == 'z' && ch[i+2] == '=')
            {
                i += 2;
                a++;
            }
            else
            {
                a++;
            }
        }

        else if (ch[i] == 'l' || ch[i] == 'n')
        {
            if (ch[i+1] == 'j')
            {
                i++;
                a++;
            }
            else
            {
                a++;
            }
        }

        else if (ch[i] == 's' || ch[i] == 'z')
        {
            if (ch[i+1] == '=')
            {
                i++;
                a++;
            }
            else
            {
                a++;
            }
        }
        else
        {
            a++;
        }
    }

    printf("%d", a);

    return 0;
}
