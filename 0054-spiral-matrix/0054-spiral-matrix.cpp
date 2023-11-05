class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int totalElements = rows*cols;
        vector<int> ans;
        int startingRow = 0, endingColumn = cols-1, endingRow = rows-1, startingColumn = 0;
        int count = 0;
        while(count < totalElements ){
            // iterate first/starting row
            for(int i= startingColumn; i <= endingColumn && count < totalElements ; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            // iterate last/ending column
            for(int i= startingRow; i<= endingRow && count < totalElements ; i++){
                ans.push_back(matrix[i][endingColumn]);
                count++;
            }
            endingColumn--;
            // iterate the last row / ending row
             for(int i= endingColumn; i >= startingColumn && count < totalElements ; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            // iterate the first column / start column
            for(int i= endingRow; i >= startingRow && count < totalElements ; i--){
                ans.push_back(matrix[i][startingColumn]);
                count++;
            }
            startingColumn++;
            
        }
        return ans;
    }
};