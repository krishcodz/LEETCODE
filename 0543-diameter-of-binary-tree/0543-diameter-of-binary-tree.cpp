class Solution {
    int calc(TreeNode* root, int& diameter) {
        if (root == NULL) return 0;   
        int left = calc(root->left, diameter);            
        int right = calc(root->right, diameter);          
        diameter = max(diameter, left + right);          
        return max(left, right) + 1;                    
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;                            
        calc(root, diameter);                       
        return diameter;
    }
};