class Solution {
    vector<TreeNode*> sorted;
public:
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        sorted.push_back(root);
        inorder(root->right);
    }

    TreeNode* helper(int left, int right){
        if(left > right) return nullptr;
        int mid = left + (right - left)/2;
        TreeNode* node = sorted[mid];
        node->left = helper(left, mid-1);
        node->right = helper(mid+1, right);
        return node;
    }
    TreeNode* balanceBST(TreeNode* root) {
        if(!root) return nullptr;
        inorder(root);
        return helper(0, sorted.size()-1);
    }
};
