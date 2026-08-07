#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxTime){
    int pt=1, time=0;
    for(int x: arr){
        if(x>maxTime) return false; 
        if(x + time <= maxTime){
            time+=x;
        }else{
            pt++;
            time=x;
        }
    }
    return pt<=m;
}

int minTime(vector<int>& arr,int n, int m){
    if (m>n) return -1;
    int maxt=INT_MIN, sum=0;
    for(int x: arr){
        maxt=max(maxt,x);
        sum+=x;
    }

    int st=maxt, end=sum, ans=-1;
    while (st<=end){
        int mid=st+ (end-st)/2;
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
    vector <int> arr={40,30,10,20};
    int n=arr.size();
    int m=2;
    cout<< minTime(arr,n,m);
    
    
    return 0;
}