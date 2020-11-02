#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() 
{
    printf("Data type char: ");
    printf("\tSize = %lu \tUnsigned max = %d \t",sizeof(char),UCHAR_MAX);
    printf("\t\tSigned min = %d \t\t\tSigned max = %d\n",CHAR_MIN,CHAR_MAX);

    printf("Data type short: ");
    printf("\tSize = %lu \tUnsigned max = %d \t",sizeof(short),USHRT_MAX);
    printf("\t\tSigned min = %d \t\t\tSigned max = %d\n",SHRT_MIN,SHRT_MAX);

    printf("Data type int: ");
    printf("\t\tSize = %lu \tUnsigned max = %u \t",sizeof(int),UINT_MAX);
    printf("\tSigned min = %d \t\tSigned max = %d\n",INT_MIN,INT_MAX);

    printf("Data type long: ");
    printf("\tSize = %lu \tUnsigned max = %lu \t",sizeof(long),ULONG_MAX);
    printf("Signed min = %ld \tSigned max = %ld\n",LONG_MIN,LONG_MAX);

    printf("\nData type float: ");
    printf("\tSize = %lu \tmax = %g ",sizeof(float),FLT_MAX);
    printf("\tPrecision = %d \n",FLT_DIG);

    printf("Data type double: ");
    printf("\tSize = %lu \tmax = %g ",sizeof(double),DBL_MAX);
    printf("\tPrecision = %d \n",DBL_DIG);

    printf("Data type long double: ");
    printf("\tSize = %lu \tmax = %Lg ",sizeof(long double),LDBL_MAX);
    printf("\tPrecision = %d \n",LDBL_DIG);

    return 0;
}