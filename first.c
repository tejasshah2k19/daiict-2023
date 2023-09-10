#include <stdio.h>

int main()
{
    int x = 0;           // c -> 0 : false , any number -> true
    if (scanf("%d", &x)) // 0
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    // x = printf("hi");
    // printf("\n%d", x);
    // if (printf("\n")) // post  -> error , true , flase , JaiHind True , JaiHind False, Nothing
    // {
    //     printf("True");
    // }
    // else
    // {
    //     printf("False");
    // }

    return 0;
}