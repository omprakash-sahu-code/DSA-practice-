#include <iostream>
#include <vector>
#include <string.h>
using namespace std; 

struct Class {
    char name[50];
    int age;
    float per;
};




int main(){
    Class n;
    n.age=18;
    n.per=90.03;
    strcpy(n.name, "omprakash");
    cout << n.age<< n.name
    ;

    


    return 0;

}    
