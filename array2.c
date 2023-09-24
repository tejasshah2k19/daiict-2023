#include <stdio.h>

void swap(int p[]) // array
{
    int i;
    for (i = 0; i < 5; i++)
    {
        p[i] = p[i] * 2;
    }
}
void swap2(int inr) // 2
{
    inr = 500;            // 500
    printf("\n%d ", inr); // 500
}

void init()
{
    int x[5];
    int i;
    i = 0;
    while (i < 5)
    {
        x[i] = ++i; // x[1] = 1;
    }
    i = 0;
    while (i < 5)
    {
        printf("\n %d", x[i]); // 0 1 2 3 4 , 1 2 3 4 5,ans => gv 1 2 3 4
        i++;
    }
}

void init2()
{
    int a[1] = {100};
    printf("\n%d %d", a[0], 0 [a]);
}
int main()
{
    int i;
    int inr = 100;
    int a[5] = {1, 2, 3, 4, 5};
    swap(a);
    swap2(inr); // inr address , inr value
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", a[i]); // 1 2 3 4 5 , 2 4 6 8 10 , 5 4 3 2 1 ,4 8 12 16 20,1 2 3 4 10
    }
    printf("\n\ninr = %d", inr); // 100

    // 2 4 6 8 10
    swap2(a[0]);                   // pass by value                  //&a[0]=-->address of a[0]              // 2
    printf("\n\na[0] = %d", a[0]); // 2  -- 500
    printf("\nInit\n");
    init();

    printf("\nInit2\n");
    init2();

    return 0;
}
// pass by value->variable , => inr
// pass by ref->array,pointer,
