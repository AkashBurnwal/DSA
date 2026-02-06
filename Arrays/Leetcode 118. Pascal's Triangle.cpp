class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri;
        for(int i=1 ;  i <= numRows; i++)
        {
            vector<int> line;
            int ans = 1 ;
            for(int j=1 ; j<=i; j++)
            {
                line.push_back(ans);
                ans = ans*(i-j);
                ans = ans/(j);
            }
            tri.push_back(line);
        }
        return tri;
    }
};
