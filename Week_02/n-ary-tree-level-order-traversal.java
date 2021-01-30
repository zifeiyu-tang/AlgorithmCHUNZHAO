/*
// Definition for a Node.
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
    public List<List<Integer>> levelOrder(Node root) {
       
        List<List<Integer>> lstarr =new ArrayList<List<Integer>>();
        if (null == root) {
            return lstarr;
        }
        int i,j;
        Queue<Node> que = new LinkedList<Node>();
        que.offer(root);
        while(! que.isEmpty()) {
             int size = que.size();
             List<Integer> lst =new ArrayList<Integer>();
             for(i = 0; i < size ;  i++) {
                 Node n = que.poll(); 
                 lst.add(n.val);
                 for ( j = 0; null != n.children &&  j <n.children.size(); j++) {
                     que.offer(n.children.get( j));
                 }
             }
             lstarr.add( lst);
            
        }
        return lstarr;
    }
}
