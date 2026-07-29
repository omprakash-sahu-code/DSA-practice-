#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,6,3,8,9};

    int largest=INT_MIN; int secLargest;
    for(int i=0; i<5; i++){
        if(arr[i]>largest){
            secLargest=largest;
            largest=arr[i];
        }
    }
    cout << secLargest << endl;
}