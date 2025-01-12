#include <vector>
using namespace std;

class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> result;
        if (grid.empty()) return result;

        bool includeCell = true;
        for (int i = 0; i < grid.size(); i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < grid[i].size(); j++) {
                    if (includeCell) {
                        result.push_back(grid[i][j]);
                    }
                    includeCell = !includeCell; 
                }
            } else {
                for (int j = grid[i].size() - 1; j >= 0; j--) {
                    if (includeCell) {
                        result.push_back(grid[i][j]);
                    }
                    includeCell = !includeCell; 
                }
            }
        }
        return result;
    }
};
