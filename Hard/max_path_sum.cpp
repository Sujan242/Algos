// https://leetcode.com/problems/binary-tree-maximum-path-sum/submissions/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    int ma=-100000000;
    int maxPathSum(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        helper(root);   
        return ma;
    }
    int helper(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        if(root->left==NULL && root->right==NULL){ ma=max(ma,root->val); return root->val;}
        int l=helper(root->left);
        int r=helper(root->right);
        int a=root->val;
        int lr=max(l,r);
        int aa=max(a+lr,a+l+r);
        if(a==20){cout<<aa<<"S"<<l<<" "<<r;;}
        // if(aa==42){cout<<"ss";}
        ma=max(ma,aa);
        ma=max(ma,a);
        
        
        return max(lr+a,a);
        
        
        
        
    }
    
    
    
        
        
    
};