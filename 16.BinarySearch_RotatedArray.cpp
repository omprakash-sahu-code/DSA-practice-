#include <iostream>
#include <vector>
using namespace std;

int search(vector <int>& nums,int target){
    int st=0, end=nums.size()-1, mid;
    while(st<end){
        mid=st+(end-st)/2;
        if(nums[mid]==target) return mid;
        if(nums[mid]>=nums[st]){ //Left side sorted
            if(nums[mid]>=target && nums[st]<=target){
                end=mid-1; 
            }else{
                st=mid+1;
            }
        }else{                  //Right Side sorted
            if(nums[mid]<=target && nums[end]>=target){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector <int> arr={4,5,6,7,0,1,2};
    cout << "INDEX: "<<search(arr, 0);
    
    return 0;
}