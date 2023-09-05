#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// solved: 29/08/2023

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
      char num[1000];
      char digits[10]= {'0','1','2','3','4','5','6','7','8','9'};
      int counter=0;
      scanf("%s",num); //sentence
      for (int i=0;i<10;i++){//i is the digit
        counter=0;
        for(int j=0;j<(int)strlen(num);j++){
            if(num[j]==digits[i]) {
                counter++;
                }
         }
        printf("%d ", counter);
       } 
        printf("\n");
    return 0;
}
