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
    vector<vector<int>>result;
    void path(TreeNode *root, vector<int>temp,int sum ,int &targetSum){
            if(root==NULL)return;

            sum+=root->val;
            temp.push_back(root->val);
        
            if(root->left ==NULL && root->right==NULL){
                if(sum==targetSum){
                    result.push_back(temp);
                }
                return;
            }
            path(root->left,temp,sum,targetSum);
            path(root->right,temp,sum,targetSum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
 
        int sum=0;
        vector<int>temp;
        path(root,temp,sum,targetSum);
        return result;

    }
};