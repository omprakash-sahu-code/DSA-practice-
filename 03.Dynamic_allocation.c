#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5;
    int *ptr= (int*)calloc(a,sizeof(int));
    for (int i = 0; i < 5; i++){
        printf("Enter ptr[%d]: ", i);
        scanf("%d", &ptr[i]);
    }
    printf("The array stored is : " );
    for (int i = 0; i < 5; i++)  {
        printf("ptr[%d]: %d \n", i, ptr[i]);
        
    }
    free (ptr);
    
    return 0;
}