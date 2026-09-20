class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        int count =0;
        if(root->val >= low && root->val <= high) count+= root->val;
        int left = rangeSumBST(root->left, low, high);
        int right = rangeSumBST(root->right, low, high);
        return count + left + right;
    }
};
