#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// solved : 10/02/2023

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch, s[25], sen[25];

    scanf("%c", &ch);        // Character
    scanf("%s\n", s);        // String
    scanf("%[^\n]%*c", sen); // Sentence

    printf("%c\n%s\n%s\n", ch, s, sen);

    return 0;
}
