/**
 * Problem Link : https://leetcode.com/problems/binary-tree-inorder-traversal/
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        while(root){
            if(root->left != NULL){
                TreeNode * temp = root->left;
                TreeNode * pre = temp;
                while(temp->right)
                {
                    temp = temp->right;
                }
                temp->right = root;
                root->left = NULL;
                root = pre;
           }else{
            result.push_back(root->val);
            root= root->right;
        }
        }
        return result;
    }
};
