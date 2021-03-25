

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        if(root == NULL) return NULL;
        
        if(root->data > v1 && root->data > v2) {
            return lca(root->left,v1,v2);
        } else if(root->data < v1 && root->data < v2) {
            return lca(root->right,v1,v2);
        }
        
        return root;
    }
