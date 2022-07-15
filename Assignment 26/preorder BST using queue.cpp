 vector<int>s;
    vector<int> preorderTraversal(TreeNode* root) {
        queue<TreeNode*>q;
        TreeNode*temp;
        if(root==NULL) return s;
        q.push(root);
        while(!q.empty()){
            temp=q.front();
            q.pop();
            s.push_back(temp->val);
            if(temp->left!=NULL) {
                preorderTraversal(temp->left);
            }
            if(temp->right!=NULL){
                preorderTraversal(temp->right);
            }
        }
        return s;
    }
};
