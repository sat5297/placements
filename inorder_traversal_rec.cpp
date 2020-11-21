Given the root of a binary tree, return the inorder traversal of its nodes' values.



class Solution {
public:
    vector <int> a;
    
    void inorder_rec(TreeNode* root)
    {
        if(root == NULL)
            return;
        inorder_rec(root->left);
        a.push_back(root->val);
        inorder_rec(root->right);
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
            
        inorder_rec(root);
        vector <int> ans = a;
        return ans;
    }
};
