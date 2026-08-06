class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int x = 0; x < 9; x++) {
            vector<int> rfreq(10, 0);
            vector<int> cfreq(10, 0);

            for (int y = 0; y < 9; y++) {

                if (board[x][y] != '.') {
                    int a = board[x][y] - '0';
                    rfreq[a]++;
                    if (rfreq[a] > 1)
                        return false;
                }

                if (board[y][x] != '.') {
                    int b = board[y][x] - '0';
                    cfreq[b]++;
                    if (cfreq[b] > 1)
                        return false;
                }
            }
        }

        for (int row = 0; row < 9; row += 3) {
            for (int col = 0; col < 9; col += 3) {
                vector<int> mfreq(10, 0);
                for (int r = row; r < row + 3; r++) {
                    for (int c = col; c < col + 3; c++) {
                        if (board[r][c] != '.') {
                            int z = board[r][c] - '0';
                            mfreq[z]++;
                            if (mfreq[z] > 1)
                                return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};