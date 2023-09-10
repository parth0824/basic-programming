class AVLfinal{
    class Node{
        Node left,right;
        int data,height = 1;
        Node (int data){
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
            return n;
        }
        else if(root.data > data){
            root.left = INSERT(root.left,data);
        }
        else {
            root.right = INSERT(root.right,data);
        }
        root.height = 1 + max(height(root.left),height(root.right));

        int bf = balanceFactor(root);
        if(bf > 1){
            //rr
             if(data < root.left.data){
                 return rightRotation(root);
             }
             //rl
             else {
                 root.left =  leftRotation(root.left);
                 return rightRotation(root);
             }
        }
        else if(bf < -1){
            //ll
            if(data > root.right.data){
                return leftRotation(root);
            }
            else {
                //lr
                root.right = rightRotation(root.left);
                return leftRotation(root);
            }
        }
        return root;
    }
    public int balanceFactor(Node root){
        if(root == null){
            return 0;
        }
        return height(root.left) - height(root.right);
    }
    public int height(Node root){
        if(root == null){
            return 0;
        }
        return root.height;
    }
    public int max(int a,int b){
        return (a>b) ? a : b;
    }
    public Node rightRotation(Node z){
        Node x = z.left;
        Node y = x.right;
        // rotation
        x.right = z;
        z.left = y;
        z.height = max(height(z.left),height(z.right));
        x.height = max(height(x.left),height(x.right));
        return x; 
    }
    public Node leftRotation(Node x){
        Node y = x.right;
        Node t2 = y.left;
        // roration
        x.right = t2;
        y.left = x;
        x.height = max(height(x.left),height(x.right));
        y.height = max(height(y.left),height(y.right));
        return y;
    }
    public static void main(String[] args) {
        
    }
}