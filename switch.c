#include <stdio.h>

int main()
{

    int choice = 2;
    // float choice = 1.5;

    switch (choice)
    {
    case 1:
        printf("1");
        break;
    case 2 * 1:
        printf("2");
        // break ->optional
    default:
        printf("default");
        break;
    }
    return 0;
}