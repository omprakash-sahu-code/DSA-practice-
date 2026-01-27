#include <stdio.h>

int main()
{
    FILE *ptr= fopen("NewFile.txt","r");
    if (ptr==NULL){
        printf("File can't be opened!!");
        return 0;
    }
    char c=fgetc(ptr);
    while (c!=EOF){
        printf("%c", c);
        c=fgetc(ptr);
    }
    
    

    
    

    fclose(ptr);


    return 0;
}