
public class Solution {

    int totalGoodNodes = 0;

    public int goodNodes(TreeNode root) {
        countGoodNodes(root, root.val);
        return totalGoodNodes;
    }

    private void countGoodNodes(TreeNode root, int currentMaxOnPath) {
        if (root.val >= currentMaxOnPath) {
            ++totalGoodNodes;
        }
        if (root.left != null) {
            countGoodNodes(root.left, Math.max(root.left.val, currentMaxOnPath));
        }
        if (root.right != null) {
            countGoodNodes(root.right, Math.max(root.right.val, currentMaxOnPath));
        }
    }
}

/*
Class TreeNode is in-built in the solution file on leetcode.com. 
When running the code on the website, do not include this class.
 */
class TreeNode {

    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {}

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
