#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// solved : 28/08/2023

int main()
{

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1); //The strlen() function determines the length of string excluding the ending null character
    // Write your logic to print the tokens of the sentence here.
    for (int i = 0; i < (int)strlen(s); i++)
    {
        if (s[i] != ' ')
            printf("%c", s[i]);
        else
            printf("\n");
    }
            printf("\n");
    return 0;
}
