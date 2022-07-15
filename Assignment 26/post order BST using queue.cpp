 vector<int>k;
    vector<int> postorderTraversal(TreeNode* root) {
        queue<TreeNode*>q;
        TreeNode*temp;
        if(root==NULL) return k;
  //      temp=root;
        q.push(root);
    //    k.push_back(temp->val);
        while(!q.empty()){
            temp = q.front();
            q.pop();
            if(temp->left) {
                postorderTraversal(temp->left);                                                     
            }
            if(temp->right!=NULL) postorderTraversal(temp->right);
            k.push_back(temp->val);
        }
        return k;
    }
};
