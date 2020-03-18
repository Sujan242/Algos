// https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1
int maxDiff(Node *root, int k)
{
    //Your code here
    if (root==NULL)
    {
        return INFINITY;
    }
    else if(k<root->data)
    {
        return min(maxDiff(root->left,k),abs(k-root->data));
    }
    else if(k>root->data)
    {
        return min(maxDiff(root->right,k),abs(k-root->data));
    }
    else
    {
        return 0;
    }
    
    
}