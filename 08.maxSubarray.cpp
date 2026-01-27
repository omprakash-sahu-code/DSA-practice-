#include <iostream>
#include <vector>
using namespace std; 


int main(){
    int sz=6;
    int arr[sz]={3,-4,5,4,7,-8};
    int maxSum=INT_MIN;
    int sum=0;
    cout << "Elements are : "<< endl;
    for (int st=0; st<sz; st++){
        for(int end=st; end<sz; end++){
            for(int i=st; i<=end; i++){
                cout <<"["<<arr[i]<<"]";
            }
            cout << ", ";
        }
        cout<< endl;
    }
    for(int st=0; st<sz ;st++){
        sum+=arr[st];
        maxSum=max(sum,maxSum);
        if (sum<0){
            sum=0;
        }
        
    }
    cout << "Maximum sum = " << maxSum;
    return 0;

}    
