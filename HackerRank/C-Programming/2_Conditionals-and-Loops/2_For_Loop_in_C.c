
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// solved : 21/08/2023
int main()
{

    int a, b;
    char *list[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d\n", &a, &b);
    for (int i = a; i <= b; i++)
    {
        int j = 0;
        if (i >= a && i <= 9)
        {
            printf("%s\n", list[i] + j);
        }
        else
        {
            if (i > 9 && (i % 2 == 0))
                printf("even\n");
            else
                printf("odd\n");
        }
        j++;
    }
    return 0;
}

/*

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void PrintNumbers(int n);
void OddEvenFunction(int n);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
      // Complete the code.
    for(int i=a ; i<=b ; i++){
        if(i>=1 && i<=9) PrintNumbers(i);
        else OddEvenFunction(i);
    }

    return 0;
}

void PrintNumbers(int n){
        switch(n){
        case 0 : printf("zero\n"); break;
        case 1 : printf("one\n"); break;
        case 2 : printf("two\n"); break;
        case 3 : printf("three\n"); break;
        case 4 : printf("four\n"); break;
        case 5 : printf("five\n"); break;
        case 6 : printf("six\n"); break;
        case 7 : printf("seven\n"); break;
        case 8 : printf("eight\n"); break;
        case 9 : printf("nine\n"); break;
        }
    }

void OddEvenFunction(int n){
        if(n>9){
            if(n%2==0)printf("even\n");
            else printf("odd\n");
            }
        }

*/
