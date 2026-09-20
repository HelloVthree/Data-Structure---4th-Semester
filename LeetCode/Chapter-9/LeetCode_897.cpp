class Solution {
private:
    TreeNode* node = new TreeNode(0);
    TreeNode* curr = node;
public:
    TreeNode* increasing(TreeNode* root) {
        if(!root) return nullptr;
        increasing(root->left);
        root->left = nullptr;
        curr->right = root;
        curr = curr->right;
        increasing(root->right);
        return node->right;
    }
};
