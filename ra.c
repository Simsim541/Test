#include <stdio.h>
#include <stdlib.h>


void    rotate_A(int *array)
{
    int temp = 0;

    temp = *array;
    *array = *(array+1);
    *(array+1) = temp; 
}

int main()
{
    int *array;
    int i;

    array = malloc(sizeof(int) * 5);
    for(i = 0; i < 5; i++)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    for(i = 0; i < 5; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
    rotate_A(array);
    for(i = 0; i < 5; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
    return(0);
}
