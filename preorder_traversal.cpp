Given the root of a binary tree, return the preorder traversal of its nodes' values.

class Solution {
public:
    vector <int> a;
    
    void preorder(TreeNode* root)
    {
        if(root == NULL)
            return;
        a.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return a;
    }
};
