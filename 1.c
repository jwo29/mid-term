#include <stdio.h>

double aver_age(double in1, double in2)
{
    double aver=(in1+in2)/2;
    
    return aver;
}

int main(void)
{
    double num1, num2;

    scanf("%lf %lf", &num1, &num2);

    printf("Average: %lf \n", aver_age(num1, num2));

    return 0;
}
