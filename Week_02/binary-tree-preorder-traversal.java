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
    public List<Integer> preorderTraversal(TreeNode root) {
         List<Integer> lst =new ArrayList<Integer>();
         preorderTraversal_sub(root,lst) ;
         return lst;
    }
    public void preorderTraversal_sub(TreeNode root,List<Integer> lst){
        if(null == root){
            return;
        }
        lst.add(root.val);
        preorderTraversal_sub(root.left,lst);     
        preorderTraversal_sub(root.right,lst);
    } 
}
