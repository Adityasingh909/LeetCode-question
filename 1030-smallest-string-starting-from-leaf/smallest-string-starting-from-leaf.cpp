/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string smallestFromLeaf(TreeNode* root) {
        string s;
        dfs(root,"",s);
        return s;
    }
    void dfs(TreeNode*root,string path,string&s){
        if(root==NULL)return ;
        path+=char('a'+root->val);

        if(root->left==NULL && root->right==NULL){
            reverse(path.begin(),path.end());
            if(s.empty()|| path<s){
                s= path;
            }
            reverse(path.begin(),path.end());
        }

        dfs(root->left,path,s);
        dfs(root->right,path,s);
    }
};