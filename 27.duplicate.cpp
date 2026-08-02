#include <iostream>
using namespace std;

int duplicate(int arr[], int sz){
    
    for (int i = 0; i < sz; i++){
        bool found=false;
        for (int j = 0; j < i; j++)
        {
            if(arr[i]==arr[j]){
                found=true;
                break;
            }
        }if(found){
            continue;
        }
        int count=1;
        for (int k=i+1; k<sz; k++){
            if(arr[i]==arr[k]){
                count++;
            }
        }
        if(count>1){
            for (int x=1; x<=count; x++){
            cout<< arr[i];
        }
        }
        
    }
    
    

    return 0;
}

int main(){
    int Ip_arr[50]={8,2,3,2,2,3,5,5,4,9,2,2,5,3,6};
    int sz=sizeof(Ip_arr)/sizeof(int);
    duplicate(Ip_arr,sz);
}