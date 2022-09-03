
/**
 * @param {TreeNode} root
 * @return {number}
 */
var goodNodes = function (root) {
    this.totalGoodNodes = 0;
    countGoodNodes(root, root.val);
    return totalGoodNodes;
};

/**
 * @param {TreeNode} root
 * @param {number} currentMaxOnPath 
 * @return {number}
 */
function countGoodNodes(root, currentMaxOnPath) {
    if (root.val >= currentMaxOnPath) {
        ++this.totalGoodNodes;
    }
    if (root.left !== null) {
        countGoodNodes(root.left, Math.max(root.left.val, currentMaxOnPath));
    }
    if (root.right !== null) {
        countGoodNodes(root.right, Math.max(root.right.val, currentMaxOnPath));
    }
}


/*
 Function TreeNode is in-built in the solution file on leetcode.com. 
 When running the code on the website, do not include this function.
 */
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val);
    this.left = (left === undefined ? null : left);
    this.right = (right === undefined ? null : right);
}
