class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int mini = prices[0];
        int profit = 0;
        for(int i = 1; i<n ;i++){
            int cost = prices[i] - mini;
            profit = max(profit ,cost);
            mini = min(prices[i], mini);
        }
    return profit;
    }
};


// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n =prices.size();
//         int max = 0;
//         int i=0, j=1;
//         while(j < n){
//         if(prices[j] <= prices[i])
//         {
//             i++;
//             j++;
//             if(j == n-1)
//                 i++;
//         }
//         else if(prices[j] > prices[i])
//         {
//             if((prices[j] - prices[i]) >max){
//                 max = prices[j] - prices[i];
//             }
//             j++;
//         }
//         }
//         return max;
//     }
// };
