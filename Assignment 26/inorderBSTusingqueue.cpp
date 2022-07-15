vector<int>k;
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* temp;
        queue<TreeNode*>q;
        if(root==NULL) return k;
        q.push(root);
        while(!q.empty()){
            temp=q.front();
            q.pop();
           
            if(temp->left) inorderTraversal(temp->left);
            k.push_back(temp->val);
            if(temp->right) inorderTraversal(temp->right);
            
        }
       return k; 
    }
};
