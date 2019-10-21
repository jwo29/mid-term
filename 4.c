#include <stdio.h>

/*
   list
   r
   b main
   b 9 // for start
   watch i
   watch j
   c
*/

int main()
{
    int i, num, j=1;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
        j=j*i;

    printf("The factorial of %d is %d\n", num, j);
}
