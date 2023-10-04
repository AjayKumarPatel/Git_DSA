class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int n=matrix.size();
        // int m=matrix[0].size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(target==matrix[i][j])
        //         {
        //             return true;
        //         }
        //     }
        // }
        // return false;

        //OPTIMIZED SOLUTION
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0, j = n - 1;
        while (i >= 0 && i < m && j >= 0 && j < n) {
            if (matrix[i][j] == target)
                return true;
            else if (matrix[i][j] > target)
                j--;
            else if (matrix[i][j] < target)
                i++;
        }
        return false;
    }
};