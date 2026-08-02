#include <iostream>
using namespace std;

int cube_arr(int arr[], int sz){
    int op_arr[sz];
    cout << "["; 
    for (int i=0; i<sz; i++){
        op_arr[i]=arr[i]*arr[i]*arr[i];
        cout << op_arr[i] << " ," ;
    }
    cout << "]" <<endl;

    return 0;
}

int main(){
    int Ip_arr[5]={2,6,8,4,5};
    cube_arr(Ip_arr,5);
}