#include <stdio.h>
#include <stdlib.h>
// using a normal array to copy the numbers or by another dynamic array, both work!
//  solved : 27/08/2023

int main()
{
    int num, *arr, i;

    scanf("%d\n", &num);

    int replace[num];

    arr = (int *)malloc(num * sizeof(int));

    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    for (i = 0; i < num; i++)
    {
        replace[i] = arr[i];
    }

    for (i = 0; i < num; i++)
    {
        arr[i] = replace[num-1-i]; // if num=3, indexes : 2 1 0
    }

    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, *arr, *replace, i;
scanf("%d\n",&num);


arr = (int*)malloc(num*sizeof(int));
replace = (int*)malloc(num*sizeof(int));

for (i=0;i<num;i++){
    scanf("%d",arr+i);
}

for (i=0;i<num;i++){
    replace[i]=arr[i];
}

for (i=0;i<num;i++){
    arr[i]=replace[num-1-i]; // if num =3 : indexes : 2 1 0 // 3 2 1 
}

for (i=0;i<num;i++){
    printf("%d ",arr[i]);
}
free(arr);
free(replace);

    return 0;
}

*/
