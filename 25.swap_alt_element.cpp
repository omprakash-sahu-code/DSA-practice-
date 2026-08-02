#include <iostream>
using namespace std;

int swap_alt(int arr[], int sz){
    for (int i=0; i<sz; i=i+2){
        if(i+1<sz){
            int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
    }
    cout << "["; 
    for (int i=0; i<sz; i++){
        cout << arr[i] << " ," ;
    }
    cout << "]" <<endl;

    return 0;

}

int main(){
    int Ip_arr[5]={2,6,8,4,5};
    swap_alt(Ip_arr,5);
}