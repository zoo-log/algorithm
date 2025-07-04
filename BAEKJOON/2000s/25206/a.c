#include <stdio.h>

int main(void)
{
    int c = 0;
    float score, sub_sum = 0, tmp = 0, sum = 0;
    char subject[50], grade[2];

    for (int i = 0; i < 20; i++)
    {
        grade[1] = '\0';
        tmp = 0.0;
        scanf("%s %f %s", subject, &score, grade);

        if (grade[0] == 'F')
        {
            sum += score;
        }
        else if (grade[0] == 'P')
        {
            c++;
        }
        else
        {
            if (grade[1] == '+')
            {
                tmp += 0.5;
            }
            tmp += (69.0 - grade[0]);
            sum += score;
        }

        sub_sum += score * tmp;
    }

    printf("%f", sub_sum / sum);

    return 0;
}
