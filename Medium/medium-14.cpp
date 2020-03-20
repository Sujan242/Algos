// https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1
/*You are required to complete this method */
bool isHeap(Node * tree)
{
    // cout<<tree->data<<" ";
    if(tree->left==NULL && tree->right==NULL)
    {
        return 1;
    }
    if(tree->left!=NULL)
    {
        if(tree->data<tree->left->data)
        {
            return 0;
        }
    }
    if(tree->right!=NULL)
    {
        if(tree->data<tree->right->data)
        {
            return 0;
        }
    }
    return isHeap(tree->left) && isHeap(tree->right);
    
 // Your code here
}