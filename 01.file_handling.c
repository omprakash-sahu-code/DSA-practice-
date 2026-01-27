#include <stdio.h>

int main()
{
    FILE *ptr= fopen("File.txt","r");
    if (ptr==NULL){
        printf("File can't be opened!!");
        return 0;
    }
    int num;
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);
    fscanf(ptr, "%d", &num); 
    printf("%d\n", num);

    fclose(ptr);
    return 0;
}