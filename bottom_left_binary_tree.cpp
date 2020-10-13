class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int res = 0;
        while(!q.empty())
        {
            int c = q.size();
            for(int i = 0; i < c; i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left != NULL)
                    q.push(curr->left);
                if(curr->right != NULL)
                    q.push(curr->right);
                if(i == 0)res = curr->val;
            }
        }
        return res;
    }
};
