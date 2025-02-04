#include <stdio.h>
#include <string.h>

int main(void)
{
    int N, len, check = 0, cnt = 0, alp[26] = {0, };
    char ch[101] = {'\0', };
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", ch);
        len = strlen(ch);
        check = 0;
        
        for (int k = 0; k < 26; k++)
        {
            alp[k] = 0;
        }
        if (len <= 2)
        {
            cnt++;
        }
        else
        {
            alp[ch[0] - 97] = 1;
            check++;
            for (int j = 1; j < len; j++)
            {
                if (alp[ch[j] - 97] == 1 && ch[j] != ch[j-1])
                {
                    break;
                }
                else
                {
                    alp[ch[j] - 97] = 1;
                    check ++;
                }
            }
        }
        if (check == len)
        {
            cnt++;
        }
    }
    
    printf("%d", cnt);

    return 0;
}
