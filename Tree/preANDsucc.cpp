pair<int,int> predececessorSuccessor ( TreeNode *root,int key){
    // find key
BinaryTreeNode <int> *temp =root;
int pred=-1;
int succ=-1;
while(temp->data!=key){
    if(temp->data>key){
        succ=temp->data;
        temp=temp->left;
    }
    else{
        pred=temp->data;
        temp=temp->right;
    }
}
//pred and succ
//pred 
BinaryTreeNode <int> *leftTree =temp->left;
while(leftTree!=NULL){
    pred=leftTree->data;
    left=leftTree->right;
}

//succ
BinaryTreeNode <int> *rightTree =temp->right;
while(rightTree!=NULL){
    succ=rightree->data;
    right=rightTree->right;
}

pair<int,int> ans=make_pair(pred, succ);
return ans;

}


// pred and succ find method in Binary Search Tree