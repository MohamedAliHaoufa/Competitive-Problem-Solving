// https://www.programiz.com/c-programming/online-compiler/

// solved : 25/08/2023

#include <stdio.h>
int main()
{ // Complete the code to print the pattern.
    int n = 0;
    printf("Enter Side of a rows = ");
    scanf("%d", &n);
    int k = ((n)*2) - 1;
    int M = (k / 2) + 1;
    int N = M - 1;
    int r = n;

    int compt1 = 0, compt2 = 0, compt3 = 2, compt4 = 0, compt5 = n - 1;
    int array1[M];
    int s = 0, index = 0;

    for (int i = 1; i <= k; i++)
    {
        if (i == 1 || i == k)
        {
            for (int j = 1; j <= k; j++)
            {
                printf("%d ", n);
            }
            printf("\n");
        }

        if (i == M)
        {
            for (int j = 0; j < M; j++)
            {
                if (j >= 1)
                {
                    printf("%d ", r - j);
                }
                else
                    printf("%d ", n);
            }
            for (int j = 1; j <= N; j++)
            {
                printf("%d ", (1 + j));
            }
            printf("\n");
        }

        if (i > 1 && i < M)
        {
            compt2 = 0;
            for ( compt1 = 0; compt1 < compt3; compt1++)
            {
                array1[compt2] = n - compt2;
                printf("%d ", array1[compt2]);
                compt2++;
            }
            s = M - compt2;
            compt2 -= 1;
            for ( compt1 = 0; compt1 < s; compt1++)
            {
                printf("%d ", array1[compt2]);
            }

            compt3++;

            index = array1[compt2] - 1;

            for (int f = 1; f <= index; f++)
                printf("%d ", array1[compt2]);

            compt4 = 1;
            int indicator = N - index;
            for (int x = 1; x <= indicator; x++)
            {
                printf("%d ", array1[compt2 - compt4]);
                compt4++;
            }

            printf("\n");
        }
        if (i > M && i < k)
        {

            compt2 = 0;
            for (int compt1 = 0; compt1 < compt5; compt1++)
            {
                array1[compt2] = n - compt2;
                printf("%d ", array1[compt2]);
                compt2++;
            }
            s = M - compt2;
            compt2 -= 1;
            for (int compt1 = 0; compt1 < s; compt1++)
            {
                printf("%d ", array1[compt2]);
            }

            compt5--;

            index = array1[compt2] - 1;

            for (int f = 1; f <= index; f++)
                printf("%d ", array1[compt2]);

            compt4 = 1;
            int indicator = N - index;
            for (int x = 1; x <= indicator; x++)
            {
                printf("%d ", array1[compt2 - compt4]);
                compt4++;
            }

            printf("\n");
        }
    }
    return 0;
}
