int solve(BinaryTreeNode <int> **root, int & i , int k ){
    // baser case
    if(root==NULL)
    {
        return -1;
    }
    //l
    int left=solve(root->left , i ,k );
    if (left!=-1){
        return left;
    }
    //N
    i++;
    if(i==k)
    return root->data;
// 
return solve (root->right, i,k);
}
int kth smallest( BinaryTreeNode <int> *root , int k ){
  int ans= solve(root , i,k );
  return ans ;
}    
