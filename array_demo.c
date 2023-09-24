#include <stdio.h>

int main()
{

    // array address 100
    int a[5] = {1, 2, 3, 4, 5};
    // unsigned int
    // 2 3 4 5
    // -2 -6 -5

    // int a; //-10

    int a;          // 10 -10 {4->2 byte + 2 byte - } {-50 to 50}
    unsigned int x; //{4 byte + } {100}
    //%d -> signed int
    //%u => unsigned int
    // 65XXX
    printf("\n%u ", a);     // base address ->address of 0th index {100}
    printf("\n%u ", a + 1); // base address + 1 size {104} , a+2
    // printf("\n%d", a[0]);   // 1
    // printf("\n%d", a[0]++); // 1{2}
    // printf("\n%d", ++a[0]); // 3{3}
    // printf("\n%d", a[0]++); // 3{4}
    // printf("\n%d", ++a[0]); // 5{5}
    // printf("\n%d", a[0]);   // ans =>5

    // printf("\n%d", a[0]);   // 1
    // printf("\n%d", a[0]++); // 1 {2}
    // printf("\n%d", a[0]);   // 2 2
    // printf("\n%d", ++a[0]); // 3
    // //   printf("\n%d", a[0 ++]); // error,1,2
    // //   printf("\n%d", a[++0]);  //

    return 0;
}
