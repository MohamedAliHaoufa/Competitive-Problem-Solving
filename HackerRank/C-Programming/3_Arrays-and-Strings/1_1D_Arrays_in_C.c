#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// solved : 26/08/2023

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, sum = 0;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int)); // a dynamic array

    // initialize the array elements.
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // or scanf("%d",(arr+i));
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%d\n", sum);

    free(arr);
    return 0;
}
