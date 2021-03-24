

/*
Node is defined as 

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

    struct Node* newNode(int data) {
        struct Node* tmp = (struct Node*)malloc(sizeof(struct Node));
        tmp->data = data;
        tmp->left = tmp->right = NULL;
        return tmp;
    }

    Node * insert(Node * root, int data) {
        
        if(root == NULL) return newNode(data);
        
        if(data < root->data) {
            root->left = insert(root->left, data);
        } else if(data > root->data) {
            root->right = insert(root->right, data);
        }

        return root;
    }

