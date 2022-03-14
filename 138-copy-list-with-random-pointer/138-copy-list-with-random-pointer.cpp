/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> umap;
        Node* ptr = head;
        while(ptr){
            umap[ptr] = new Node(ptr->val);
            ptr = ptr->next;
        }
        ptr = head;
        while(ptr){
            umap[ptr]->next = umap[ptr->next];
            umap[ptr]->random = umap[ptr->random];
            ptr = ptr->next;
        }
        return umap[head];
    }
};