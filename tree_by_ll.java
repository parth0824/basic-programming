class Node{
    Node left;
    Node right;
    int data;
    Node(int data){
         this.data = data;
    }
}
public class tree_by_ll{
    public static void main(String[] args){
       tree_by_ll t = new tree_by_ll();
       Node root = new Node(10);
       root.left = new Node(20);
       root.right = new Node(30);
       root.left.left = new Node(40);
       root.left.right = new Node(50);
       root.right.left = new Node(60);
       root.right.right = new Node(70);
    }
} 