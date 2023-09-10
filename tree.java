// public class tree {
//     class Node{
//         Node left;
//         Node right;
//         int data;
//         Node(int data){
//             this.data = data;
//         }
//     }
//     static Node root;
//     public static Node insert(Node root,int data){
//         if(root == null){
//             Node n = new Node(data);
//             root = n;
//             return n;
//         }
//         else if(data < root.data){
//             root.left = insert(root.left , data);
//         }
//         else if(data > root.data){
//             root.right = insert(root.right,data);
//         }
//         return root;
//     }
//     public void inOrder(Node root){
//         if(root == null){
//             return ;
//         }
//         inOrder(root.left);
//         System.out.print(root.data);
//         inOrder(root.right);
//     }
//     public Nodedelete(Node root,int data){
//         if(root == null){
//             System.out.print("NOT FOUND");
//             return null;
//         }
//         else if(root.data > data){
//             root.left = insert(root.left,data);
//         }
//         else if(root.data < data){
//             root.right = insert(root.right,data);
//         }
//         else {
//             if(root.right == null && root.left == null) {
//                 return null;
//             }
//             else if(root.left != null && root.right == null){
//                 return root.left;
//             }
//             else if(root.left == null && root.right != null){
//                 return root.right;
//             }
//             else {
//                 int a = max(root.left);
//                 root.data = a;
//                 root.left = Nodedelete(root.left,a);
//                 return root;
//             }
//         }
//     }
//     public int max(Node root){
//         if(root.right != null){
//             return root.right;
//         }
//         return root.data;
//     }
//     public static void main(String[] args) {
//         insert(10);
//         insert(20);
//         insert(40);
//         insert(-10);
//         insert(2);
//     }
    
// }


class tree{
    class Node{
        int data;
        Node left;
        Node right;
        int height;
        Node(int data){
            this.data = data;
            height = 1;
        }
    }
    Node root;
    public Node insert(Node root,int data){
        if(root == null){
            Node n = new Node(data);
            return n;
        }
        else if(root.data > data){
            root.left = insert(root.left,data);
        }
        else if(root.data < data){
            root.right = insert(root.right,data);
        }
        return Node;
        
    }
    public int bf(Node n){
        if(n == null){
            return 0;
        }
        return height(n.left) - height(n.right);
    }
    public int height(Node n){
        if(n == null){
            return 0;
        }
        return n.height;
    }
    public int max(int a,int b){
        return (a > b)? a : b;
    }
    public static void main(String[] args) {
        
    }
}