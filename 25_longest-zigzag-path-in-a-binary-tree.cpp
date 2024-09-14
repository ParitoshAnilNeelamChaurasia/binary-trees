// https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/

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
    int mx_path ;

    void f(TreeNode* root , int steps , bool goleft)
    {
        if(root == NULL)
        {
            return ;
        }

        mx_path = max(mx_path , steps) ;
        if(goleft == true)
        {
            f(root->left , steps+1 , false) ;
            f(root->right , 1 , true) ;
        }
        // goleft == false
        else
        {
            f(root->right , steps+1 , true) ;
            f(root->left , 1 , false) ;
        }
    }
    int longestZigZag(TreeNode* root) {
        int steps = 0 ;

        f(root ,steps , false) ;

        return mx_path ;

    }
};
