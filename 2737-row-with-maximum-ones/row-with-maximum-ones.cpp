class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rows = mat.size(); int cols = mat[0].size();
        int maxRow = -1; int maxOnes = INT_MIN;
        for( int i = 0; i< rows; i++){
            int count = 0;
            for(int j = 0; j < cols; j++){
                if(mat[i][j]==1)
                    count++;
            }
            if(maxOnes < count){
                maxOnes = count;
                maxRow = i;
            }
        }
        return vector<int>({maxRow,maxOnes});
    }
};