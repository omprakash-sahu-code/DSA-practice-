#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowed){
    int stu= 1, pages= 0;
    for(int i=0; i<n; i++){
        if(arr[i]>maxAllowed){
            return false;
        }
        if(pages + arr[i] <= maxAllowed){
            pages+=arr[i];
        }else{
            stu++;
            pages=arr[i];
        }
    }

    return stu>m ? false:true;
}

int bookAllocate(vector<int> &arr,int n, int m){
    if(m>n){
        return -1;
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    
    int st=0, end=sum, ans=-1;
    while(st<=end){
        int mid=st + (end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}


int main(){
    vector <int> arr={2,1,3,4};
    int n=arr.size();
    int m=2;
    cout<< bookAllocate(arr,n,m);
    
    
    return 0;
}