// https://leetcode.com/problems/binary-tree-inorder-traversal/solution/

/**
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
        
        stack <TreeNode*> s;
        // s.push(root);
        vector<int> v;
        
        while(root!=NULL || s.size()>0)
        {
            while(root!=NULL)
            {
                s.push(root);
                root=root->left;
            }
            root=s.top();
            v.push_back(s.top()->val);
            s.pop();
            root=root->right;
        }
        return v;
            
        
    }
};