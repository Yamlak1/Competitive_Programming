class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) {
            return 0;
        }
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        function<void(int, int)> dfirst = [&](int row, int col) {
            if (row < 0 || col < 0 || row >= rows || col >= cols || grid[row][col] == '0') {
                return;
            }
        grid[row][col] = '0';  
        dfirst(row - 1, col); 
        dfirst(row + 1, col); 
        dfirst(row, col - 1);  
        dfirst(row, col + 1);  
    };
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            if (grid[row][col] == '1') {
                ++count;  
                dfirst(row, col);  
            }
        }
    }

    return count;
}
    
};
