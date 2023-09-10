#include <stdio.h>

int main()
{

    // short int i = 1;

    // for (; i++;)
    //     printf("\n%d", i); // 1 5 6 gv error none of the given
    // printf("\n-------------");

    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == j)
            {
                break;
            }
            printf("%d", j);
        }
        printf("\n");
    }
}