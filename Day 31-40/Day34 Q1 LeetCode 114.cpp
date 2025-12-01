// Flatten Binary Tree to Linked List (#114)

class Solution {
public:
    void flatten(TreeNode* root) {
        if (!root) return;

        std::stack<TreeNode*> st;
        st.push(root);
        TreeNode* prev = nullptr;

        while (!st.empty()) {
            TreeNode* curr = st.top();
            st.pop();

            if (prev) {
                prev->left = nullptr;    
                prev->right = curr;
            }

            if (curr->right) st.push(curr->right);
            if (curr->left) st.push(curr->left);

            prev = curr;
        }
    }
};
