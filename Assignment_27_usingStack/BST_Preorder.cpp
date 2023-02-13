class Solution {
public:
    vector<int>s;
    void store(TreeNode* root){
        if(root==NULL) return;
        s.push_back(root->val);
        store(root->left);
        store(root->right);

    
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        else {
            store(root);
            return s;
        }



    }
};
