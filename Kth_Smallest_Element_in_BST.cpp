/**
 * ProblemLink : https://leetcode.com/problems/kth-smallest-element-in-a-bst/
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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode *>newstack;
        while(!newstack.empty() ||root){
            while(root){
                newstack.push(root);
                root = root->left;
            }
            root = newstack.top();
            k--;
            if(k == 0) return root->val;
            newstack.pop();
            root = root->right;
        }
        return -1;
    }
};
