class Solution {
public:
    void addRow(vector<vector<int>> &solution, int numRow) {
        if (numRow == 0) {
            solution.push_back({1});
        } else {
            vector<int> row;
            row.push_back(1);
            for (int i = 1; i < numRow ; i++) {
                row.push_back(solution.back().at(i) + solution.back().at(i-1));
            }
            row.push_back(1);
            solution.push_back(row);
        }
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> solution;
        int i = 0;
        while (i != numRows) {
            addRow(solution, i);
            i++;
        }
        
        return solution;
    }
};