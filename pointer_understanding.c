#include <stdio.h>

int main()
{
    printf("Let's Learn about pointers in C!\n");
    int a = 76;
    int* ptra = &a;
    printf("The address of ptra is %d\n", &ptra);
    printf("The address of a is %d\n", &a);
    printf("The value of ptra is %d\n", ptra);
    printf("The value of a is (using dereferencing) %d\n", *ptra);
    printf("The value of a is (w/o using dereferencing) %d\n", a);
    int* ptrb = NULL;
    printf("The address of ptrb is %d\n", &ptrb);
    printf("The value of ptrb is %d\n", ptrb);
    printf("The value contained in ptrb is %d\n", *ptrb);
    return 0;
}
