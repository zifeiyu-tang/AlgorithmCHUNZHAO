/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
         List<Integer> lst =new ArrayList<Integer>();
         inorderTraversal_sub(root,lst) ;
         return lst;
    }
    public void inorderTraversal_sub(TreeNode root,List<Integer> lst){
        if(null == root){
            return;
        }
        inorderTraversal_sub(root.left,lst);
        lst.add(root.val);
        inorderTraversal_sub(root.right,lst);
    } 
}
