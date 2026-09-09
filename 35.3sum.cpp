#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <set>
using namespace std;

void threesum(vector<int> &nums){  //Bruteforce approach
    set<vector<int>> s;
    vector<vector<int>> ans;

    for (int i = 0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            for(int k=j+1; k<nums.size(); k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> temp={nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    if(s.find(temp)!=s.end()){
                        s.insert(temp);
                        ans.push_back(temp);
                    }
                }
            }
        }
    }

    for(auto x: s){
        for(int y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
}

void threesum(vector<int> &nums){   //Optimized approach
    set<vector<int>> unique;

    for(int i=0; i<nums.size(); i++){
        int target=-nums[i];
        set<int> s;
        for(int j=i+1; j<nums.size(); j++){
            int c=target - nums[j];
            if(s.find(c)!=s.end()){
                vector<int> temp={nums[i], nums[j], c};
                sort(temp.begin(),temp.end());
                unique.insert(temp);
            }
            s.insert(nums[j]);
        }
    }

    vector<vector<int>> ans(unique.begin(),unique.end());
    


} 
    

int main(){
    vector<int> arr={-1,0,1,2,-1,-4};
    threesum(arr);
    return 0;
}