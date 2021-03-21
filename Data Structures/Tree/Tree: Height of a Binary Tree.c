

/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/
int getHeight(struct node* root) {
    // Write your code here
    if(root == NULL) return -1;
    int lHeight = getHeight(root->left);
    int rHeight = getHeight(root->right);
    if(lHeight > rHeight) return lHeight+1;
    return rHeight+1;
}

