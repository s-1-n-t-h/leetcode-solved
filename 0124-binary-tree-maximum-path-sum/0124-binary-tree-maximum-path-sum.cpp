/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxPath = INT_MIN;
        dfs(root,maxPath);
        return maxPath;
    }
private:
    int dfs(TreeNode* root, int& maxPath){
        if(root == NULL){
            return 0;
        }
        
        int left = max(dfs(root->left,maxPath),0);
        int right = max(dfs(root->right,maxPath),0);
        // sum with consideration of branching / split 
        int curPathSum = root->val + left + right;
        // update global max path sum
        maxPath = max(maxPath,curPathSum);
        // return max sum without split consideration
        return root->val + max(left,right);
    }
};