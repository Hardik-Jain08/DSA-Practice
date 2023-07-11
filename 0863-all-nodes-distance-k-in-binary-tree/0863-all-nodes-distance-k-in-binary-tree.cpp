/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void gfun(TreeNode* root,unordered_map<int,vector<int>>& graph){
        
        if(root->left!=NULL){
            graph[root->val].push_back(root->left->val);
            graph[root->left->val].push_back(root->val);
            gfun(root->left,graph);
        }
        if(root->right!=NULL){            
            graph[root->val].push_back(root->right->val);
            graph[root->right->val].push_back(root->val);
            gfun(root->right,graph);            
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* t, int k) {   
        if(!k) return {t->val};        
        unordered_map<int,vector<int>> graph;
        unordered_map<int,bool> vis;
        vector<int> res;
        queue<int> q;
        int cnt = 0;
        gfun(root,graph);
        q.push(t->val);
        while(!q.empty()){
            int sz = q.size();
            for(int i=0;i<sz;i++){
                int curr = q.front();
                q.pop();
                vis[curr]=true;
                
                for(int x : graph[curr])
                    if(!vis[x])
                        q.push(x);
            }
            cnt++;
            if(cnt==k){
                while(!q.empty()){
                    res.push_back(q.front());
                    q.pop();
                }
                break;
            }
        }
        return res;
    }
};