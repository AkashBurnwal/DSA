/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node *merge(Node *a, Node *b){
        Node* dummy = new Node(-1);
        Node* curr = dummy;
        while(a != NULL && b!=NULL){
            if(a->data < b->data){
                
                curr->bottom = a;
                curr = curr->bottom;
                a = a->bottom;
                
            }
            else{
                curr->bottom = b;
                curr = curr->bottom;
                b = b->bottom;
            }
            curr->next = NULL;
        }
        if(a) curr->bottom = a;
        if(b) curr->bottom = b;
        return dummy->bottom;
        
    }
    Node *flatten(Node *root) {
        // code here
        if(root == NULL || root->next == NULL) return root;
        root->next = flatten(root->next);
        root = merge(root,root->next);
        return root;
    }
};
