#include <stdio.h>
// solved : 10/08/2023

void update(int *a, int *b)
{
    // Complete this function
    int abs = *b;
    abs = *a - *b;
    if (abs < 0)
        abs *= (-1);
    *a += *b;
    *b = abs;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}
