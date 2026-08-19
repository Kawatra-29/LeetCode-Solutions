class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int l = 0, r = rows - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;

            if (target >= matrix[m][0] && target <= matrix[m][cols - 1]) {

                int left = 0, right = cols - 1;

                while (left <= right) {
                    int mid = left + (right - left) / 2;

                    if (matrix[m][mid] == target) {
                        return true;
                    } else if (matrix[m][mid] > target) {
                        right = mid - 1;
                    } else {
                        left = mid + 1;
                    }
                }

                return false;
            } else if (target < matrix[m][0]) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        }

        return false;
    }
};