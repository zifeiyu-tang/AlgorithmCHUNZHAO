/*
 *// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public List<Integer> preorder(Node root) {
       List<Integer> lst =new ArrayList<Integer>();
       preorder(root,  lst) ;
       return lst;
    }
    public void  preorder(Node root, List<Integer> lst)  {
         if ( null == root) 
             return;
         lst.add(root.val);
         int i;
         for ( i = 0;  null != root.children && i < root.children.size();i++){
               preorder(root.children.get(i),  lst) ;

         }
    }
}
