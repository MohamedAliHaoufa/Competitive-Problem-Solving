#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
// solved : 10/02/2023

int max_of_four(int a, int b, int c, int d)
{
    int Greatest = 0;
    if (a > b && a > c && a > d)
    {
        Greatest = a;
    }
    else if (b > a && b > c && b > d)
    {
        Greatest = b;
    }
    else if (c > a && c > b && c > d)
    {
        Greatest = c;
    }
    else if (d > a && d > b && d > c)
    {
        Greatest = d;
    }
    else if (a == b == c == d)
    {
        Greatest = a;
    }
    return Greatest;
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
