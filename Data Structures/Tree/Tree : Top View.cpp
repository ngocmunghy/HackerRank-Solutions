#include<bits/stdc++.h>

using namespace std;

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

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

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

    void topView(Node * root) {
        
        queue<pair<Node*,int>> q;
        map<int,int> m;
        q.push(make_pair(root,0));
        
        while(!q.empty()) {
            pair<Node*,int> front = q.front();
            q.pop();
            int hd = front.second;
            Node* temp = front.first;
            if(m.find(hd) == m.end()) {
                m[hd] = temp->data;
            }
            if(temp->left) {
                q.push(make_pair(temp->left, hd - 1));
            }
            if(temp->right) {
                q.push(make_pair(temp->right, hd + 1));
            }
        }
        
        for(auto x : m) {
            cout << x.second << " ";
        }
    }

}; //End of Solution
