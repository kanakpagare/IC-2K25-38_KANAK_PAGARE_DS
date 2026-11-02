#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxProfit(const vector<int>& prices){
        if( prices.empty()) return 0;
        int min_price = prices[0];
        int max_profit = 0;
        for( size_t i=1; i< prices.size(); i++){
            min_price= min( min_price, prices[i]);
            int current_profit = prices[i]- min_price;
            max_profit = max(max_profit, current_profit);
        }
        return max_profit;
    }
    
int main() {
   vector<int> prices = { 7,1,5,3,6,4};
   cout<< "maximum profit: "<< maxProfit(prices)<<endl;
    return 0;
}
