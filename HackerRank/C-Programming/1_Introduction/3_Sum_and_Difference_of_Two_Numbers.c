#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// solved : 10/02/2023

int main()
{
    int num1, num2, sum1, div1;
    float f1, f2, sum2, div2;
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &f1, &f2);
    sum1 = num1 + num2;
    div1 = num1 - num2;
    sum2 = f1 + f2;
    div2 = f1 - f2;
    printf("%d %d\n", sum1, div1);
    printf("%.1f %.1f\n", sum2, div2);

    return 0;
}