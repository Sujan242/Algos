// https://practice.geeksforgeeks.org/problems/check-for-bst/1

bool is(Node* root,int min,int max)
{
    if(root==NULL)
    {
        return 1;
    }
    if(root->data<=max && root->data>min)
    {
        return is(root->left,min,root->data) && is(root->right,root->data,max);
    }
    else
    {
        return 0;
    }
}

bool isBST(Node* root) {
    
    is(root,0,10000000);
}