
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        if(root == NULL) return;
        
        queue<Node*> q;
        
        q.push(root);
        
        while(q.empty() == false) {
            Node *node = q.front();
            printf("%d ",node->data);
            q.pop();
            if(node->left != NULL) {
                q.push(node->left);
            }
            if(node->right != NULL) {
                q.push(node->right);
            }
        }

    }

