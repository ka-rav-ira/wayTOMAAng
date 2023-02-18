class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0 ;
        int minSoFar = prices[0];

        for(int i = 0 ; i<prices.size() ; i++){
            minSoFar = min(prices[i],minSoFar);
            int Profit  = prices[i] - minSoFar ; 
            maxProfit = max(Profit,maxProfit);
        }
        return maxProfit;
    }
};