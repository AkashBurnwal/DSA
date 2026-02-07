class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0;
        int high = m*n -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            int row = mid / n, col = mid % n;
            if (matrix[row][col] == target) return true;
            else if (matrix[row][col] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};





//  bool binarySearch(vector<int> &nums,int target)
//     {
//         int n = nums.size();
//         int low = 0;
//         int high = n-1;
//         while (low <= high) {
//             int mid = (low + high)/2;
//             if(nums[mid] == target) return true;
//             else if(nums[mid] < target) low = mid+1;
//             else high = mid-1;
//         }
//         return false;

//     }
    
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m = matrix.size();
//         int n = matrix[0].size();
//         for(int i=0 ; i < m; i++)
//         {
//             if(matrix[i][0]<= target && matrix[i][n-1]>=target)
//             {
//                 return binarySearch(matrix[i] , target);
//             }
//         }
//         return false;
//     }
