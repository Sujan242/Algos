// https://practice.geeksforgeeks.org/problems/add-all-greater-values-to-every-node-in-a-bst/1

void inorder(Node* root,int &sum){
    if(root==NULL){
        return;
    }
    inorder(root->right,sum);
    sum+=root->data;
    root->data=sum;
    inorder(root->left,sum);
}
void modify(Node **root)
{
// Your code here
int sum=0;
inorder(*root,sum);

}