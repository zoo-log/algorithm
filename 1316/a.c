#include <stdio.h>

int main(void)
{
    int N;
    char ch[100], alp[26];

    for (int i = 0; i < 26; i++)
    {
        alp[i] = 'a'+i;
        printf("%c\n", alp[i]);
    }
    ch[0] = 'a';
    if (ch[0] == alp[0])
    {
        printf("Correct");
    }
    return 0;
}
