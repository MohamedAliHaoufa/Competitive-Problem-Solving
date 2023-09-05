
/*

 C library Reference site : https://cplusplus.com/reference/cstdio/scanf/

 The solutions : https://www.brokenprogrammers.com/playing-with-characters-in-c-hackerrank-solution/

After inputting the character and the string, inputting the sentence by the above mentioned statement won't work.
This is because, at the end of each line, a new line character \n is present. So, the statement: scanf("%[^\n]%*c", s);
will not work because the last statement will read a newline character from the previous line. This can be handled in a
variety of ways and one of them being: scanf("\n"); before the last statement.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// solved : 10/02/2023

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[25] = "Welcome to C programming.";
    printf("Hello, World!\n");
    printf("%s\n", s);

    return 0;
}