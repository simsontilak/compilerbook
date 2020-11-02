#include <stdio.h>

int main()
{
    int a = 100;
    float b = 34.4566;
    char yes = 'y';

    printf("Address of a = %p b = %p yes = %p\n", &a, &b, &yes);

    int *pa = &a;
    float *pb = &b;
    char *pyes = &yes;

    printf("Address of a = %p b = %p yes = %p\n", pa, pb, pyes);

    int d = a * *pa;

    printf("%d\n", d);

    printf("Values stored in pa = %d pb = %.2f pyes = %c\n",
           *pa, *pb, *pyes);

    return 0;
}