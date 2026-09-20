class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i =0;
        return helper(preorder, i, INT_MAX);
    }
    TreeNode* helper(vector<int>& preorder, int& i, int bound){
        if(i >= preorder.size() || preorder[i] > bound) return nullptr;
        TreeNode* node = new TreeNode(preorder[i++]);
        node->left = helper(preorder, i, node->val);
        node->right = helper(preorder, i, bound);
        return node;
    }
};
