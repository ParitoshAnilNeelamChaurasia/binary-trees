// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/

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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q ;
        q.push(root) ;

        int max_sum = INT_MIN ;

        int res_level = 0 ;
        int curr_level = 1 ;

        while(!q.empty())
        {
            int n = q.size() ;
            int sum = 0 ;

            while(n--)
            {
                TreeNode* curr = q.front() ;
                q.pop() ;

                sum += curr->val ;

                if(curr->left)
                {
                    q.push(curr->left) ;
                }

                if(curr->right)
                {
                    q.push(curr->right) ;
                }
            }
            if(sum > max_sum)
            {
                max_sum = sum ;
                res_level = curr_level ;
            }
            curr_level++ ;
        }
        return res_level ;
    }
};
