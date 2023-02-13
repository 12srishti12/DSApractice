class Solution {
public:
vector<int>s;
void store(TreeNode* root){
    if(root==NULL) return;
    else{
        store(root->left);
        s.push_back(root->val);
        store(root->right);
    }
}
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        else{
            store(root);
            return s;
        }
    }
};
