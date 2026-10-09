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
        Stack<TreeNode> st=new Stack<>();
        ArrayList<Integer> arr=new ArrayList<>();
        TreeNode A=root;
        while(A!=null || !st.isEmpty()){
            while(A!=null){
                st.push(A);
                A=A.left;
               
            }
         
            A=st.pop();
                arr.add(A.val);
            A=A.right;
        }
        return arr;
    }
      
    
}