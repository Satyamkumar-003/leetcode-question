class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> result(n, vector<int>(n, 0));
        if (n == 2)
            return {{1, 1}, {1, 1}};
        int mid = n / 2;
        int m = queries.size();
        int mrow, mcol, marow, macol;

       
        for (int k = 0; k < queries.size(); k++) {

            int mrow = queries[k][0];
            int mcol = queries[k][1];
            int marow = queries[k][2];
            int macol = queries[k][3];

            for (int i = mrow; i <=marow; i++) {
                for (int j = mcol; j <=macol; j++) {
                    result[i][j]++;
                }
            }
        }

        return result;
    }
};