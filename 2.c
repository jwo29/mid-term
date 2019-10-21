#include <stdio.h>

int main(void)
{
    int i=1;
    int *pi=&i;

    for(int j=0;j<1000;j++)
        printf("%d \n", (*pi)++);
    return 0;
}
