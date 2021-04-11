class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> my_tree;
        while (root != nullptr || !my_tree.empty()) {
            while (root != nullptr) {
                my_tree.push(root);
                root = root->left;
            }
            root = my_tree.top();
            my_tree.pop();
            result.push_back(root->val);
            root = root->right;
        }
        return result;
    }
};