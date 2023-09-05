#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// solved : 22/08/2023
int main()
{

    int n, sum = 0;
    scanf("%d", &n);
    // Complete the code to calculate the sum of the five digits on n.
    int num1 = n % 10, num2 = (n / 10) % 10, num3 = (n / 100) % 10,
        num4 = (n / 1000) % 10, num5 = (n / 10000) % 10;
    sum = num1 + num2 + num3 + num4 + num5;
    // printf("modulo : %d %d %d %d\n", n%10, (n/10)%10, (n/100)%10, (n/1000)%10);
    printf("%d\n", sum);
    return 0;
}
