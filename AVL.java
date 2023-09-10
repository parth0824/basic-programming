public class AVL {
    class Node{
        int data;
        Node left;
        Node right;
        Node height;
        Node(int data){
            this.data = data;
        }
    }
    static Node root;
    public void insert(int data){
        root = INSERT(root,data);
    }
    public Node INSERT(Node root,int data){
        if(root == null){
            Node n = new Node(data);
            root = n;
            return root;
        }
        else if(root.data > data){
            root.left = INSERT(root.left,data);
        }
        else if(root.data < data){
            root.right = INSERT(root.right,data);
        }
        return root;
    }
    public Node inOrder(Node root){
        if(root == null) return root;
        inOrder(root.left);
        System.out.println(root.data+" ");
        inOrder(root.right);
        return root;
    }
    
    public static void main(String args[]){
        AVL a = new AVL();
        a.insert(10);
        a.insert(80);
        a.insert(30);
        a.insert(50);
        a.insert(20);
        a.insert(90);
        a.insert(20);
        a.insert(40);
        a.insert(60);
        a.insert(70);
        a.inOrder(root);

    }
}