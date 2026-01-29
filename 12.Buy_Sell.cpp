#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
        int min_price=prices[0], max_profit=0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]>min_price){
                max_profit=max(max_profit,(prices[i]-min_price));
            }
            min_price=min(min_price,prices[i]);
        }
        return max_profit;
}

int main(){
    vector<int> arr={7,1,4,3,2,6,1};
    cout << "Max Profit : "<< maxProfit(arr);
    return 0;
}