Given the root of a binary tree, return the inorder traversal of its nodes' values.

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack <TreeNode* > st;
        vector <int> ans;
        
        while((root != NULL)||(st.empty() == false))
        {
            while(root != NULL)
            {
                st.push(root);
                root = root->left;
            }
            root = st.top();
            st.pop();
            ans.push_back(root->val);
            root = root->right;
        }
        return ans;
    }
};
