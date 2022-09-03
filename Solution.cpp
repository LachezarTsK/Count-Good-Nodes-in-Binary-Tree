
using namespace std;

/*
Struct TreeNode is in-built in the solution file on leetcode.com. 
When running the code on the website, do not include this struct.
 */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
    
    int totalGoodNodes;
    
public:
    int goodNodes(TreeNode* root) {
        countGoodNodes(root, root->val);
        return totalGoodNodes;
    }

private:
    void countGoodNodes(TreeNode* root, int currentMaxOnPath) {
        if (root->val >= currentMaxOnPath) {
            ++totalGoodNodes;
        }
        if (root->left != nullptr) {
            countGoodNodes(root->left, max(root->left->val, currentMaxOnPath));
        }
        if (root->right != nullptr) {
            countGoodNodes(root->right, max(root->right->val, currentMaxOnPath));
        }
    }
};
