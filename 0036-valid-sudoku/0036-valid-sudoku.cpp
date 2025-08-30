class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        int n = board.size();
        int m = board[0].size();
        // for rows
        for (int i = 0; i < n; i++) {
            unordered_map<int, int> mp;
            for (int j = 0; j < n; j++) {
                if (isalnum(board[i][j])) {
                    if (mp.find(board[i][j]) != mp.end()) {
                        cout << board[i][j] << " ";
                        return false;
                    }
                    mp[board[i][j]]++;
                }
            }
        }

        // for columns
        for (int i = 0; i < n; i++) {
            unordered_map<int, int> mpp;
            for (int j = 0; j < n; j++) {
                if (isalnum(board[j][i])) {
                    if (mpp.find(board[j][i]) != mpp.end()) {
                        cout << board[j][i] << " ";
                        return false;
                    }
                    mpp[board[j][i]]++;
                }
            }
        }

        // for 3*3
        for (int block = 0; block < 9; block++) { // there are 9 blocks
            unordered_set<char> seen;         // track digits in this 3x3 block
            for (int i = 0; i < 3; i++) {     // row inside the block
                for (int j = 0; j < 3; j++) { // col inside the block
                    int row = 3 * (block / 3) + i; // map to board row
                    int col = 3 * (block % 3) + j; // map to board col

                    if (board[row][col] != '.') {
                        if (seen.count(board[row][col]))
                            return false;
                        seen.insert(board[row][col]);
                    }
                }
            }
        }

        return true;
    }
};