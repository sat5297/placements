class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector <int> res;
        if(root == NULL)return res;
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
                if(i == c-1)res.push_back(curr->val);
            }
        }
        return res;
    }
};
