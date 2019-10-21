#include <stdio.h>

int main(void)
{
    int num1=10, num2=20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int temp = *ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("num1 num2: %d %d \n", num1, num2);

    return 0;
}
