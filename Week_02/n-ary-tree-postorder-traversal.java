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
        public List<Integer> postorder(Node root) {
            List<Integer> lst =new ArrayList<Integer>();
            postorderP(root, lst );
            return lst;
        }
        public void postorderP(Node root, List<Integer> lst ) {
            if(null == root) 
            return;
            int i;
            for ( i = 0 ;  null != root.children && i < root.children.size(); i++) {
                postorderP(root.children.get(i), lst );
            }
            lst.add(root.val);
        }
    }
