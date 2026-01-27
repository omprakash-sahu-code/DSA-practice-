#include <stdio.h>
#include <string.h>

typedef union student {
    int roll_no;
    char name[20];
    float per;
    
} stu;   

int main(){
    printf("-------------STUDENT INFO--------------\n");
    stu s1;
    s1.roll_no=47;
    printf("The Roll no. is: %d\n", s1.roll_no);
    strcpy(s1.name,"Omprakash");
    printf("The Name is: %s\n", s1.name);
    s1.per=87.6;
    printf("The percentage is: %.2f %%\n", s1.per);
    
    




    return 0;
}