class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> pre(arr.size());
        pre[0] = arr[0];
        for(int i=1; i<arr.size();i++){
            pre[i]= pre[i-1]^arr[i];
        }
        vector<int> ans(queries.size());
        for(int j=0;j<queries.size();j++){
            int l = queries[j][0];
            int r = queries[j][1];
            if(l==0){
                ans[j] = pre[r];
            }
            else{
                ans[j] = pre[r]^pre[l-1];
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
//         vector<int> ans;
//         for(int i=0;i<queries.size();i++){
//             int XOR=0;
//             for(int j=queries[i][0]; j<=queries[i][1];j++){
//                 XOR ^= arr[j];
//             }
//             ans.push_back(XOR);
//         }
//         return ans;
//     }
// };
