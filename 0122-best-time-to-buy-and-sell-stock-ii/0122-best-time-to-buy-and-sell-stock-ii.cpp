class Solution {
    public:
    int maxProfit(vector<int>& P) {
        int n = size(P), i = 1, profit = 0, buy, sell;
        while(i < n) {
            for(buy = P[i-1]; i < n && P[i] < buy; i++) 
                buy = P[i];    
            if(i >= n) break;     
            for(sell = P[i]; i < n && sell <= P[i]; i++)
                sell = P[i];    
            profit += sell - buy; 
            i++;
        }
        return profit;
    }
};