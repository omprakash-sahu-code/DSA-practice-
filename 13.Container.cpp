#include <iostream>
#include <vector>
using namespace std;

int Brute_maxArea(vector<int>& height) { // O(n2)
    int length, breadth, area=0;
        for (int i = 0; i < height.size() ; i++){    
              
            for (int j = i+1; j < height.size(); j++){
                length=j-i;
                breadth=min(height[i],height[j]);  
                area=max(area,length*breadth);           
            }
            
        }
    return area;
        
}

int maxArea(vector<int>& height) { // O(n)
    int area=0, length, breadth;
    int st=0, end=height.size()-1;
    while (st<end){
        length=end-st;
        breadth=min(height[st],height[end]);
        area=max(area,length*breadth);
        if(height[st]<height[end]){
            st++;
        }else{
            end--;
        }
    }
    return area;

        
}


int main(){
    vector<int> arr={1,8,6,2,5,4,8,3,7};
    cout << "Max Area : "<< maxArea(arr);
    return 0;
}