class Solution {
public:
vector<int>s;
void store(TreeNode* root){
    if(root==NULL) return;
    else{
        store(root->left);
        store(root->right);
        s.push_back(root->val);
        
    }
}
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL) return{};
        store(root);
        return s;
    }
};
