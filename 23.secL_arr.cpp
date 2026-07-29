#include <iostream>
using namespace std;

int checkSort(int arr[], int sz){
    int assending=1; int descending =1;
    for (int i = 0; i < sz-1; i++)
    {
        if (arr[i]>arr[i+1]){
            assending=0;
        }
        if (arr[i]<arr[i+1]){
            descending=0;
        }
        
    }
    return assending || descending;

    
}

bool isPower(int x, int y) {
    int ans=1; int found=0;
    while (ans<y){
        if(ans==y){
            found =1; 
            break;
        }
        ans=ans*x;
    }
    if (found) {
        return true;
    }
    return false;
}

    
int main(){
    int arr[5]={9,8,7,6,5};
    int sz=sizeof(arr)/sizeof(int);
    cout << checkSort(arr, sz) << endl;
    return 0;
}