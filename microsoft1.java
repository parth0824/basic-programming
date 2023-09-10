import java.util.*;
class microsoft1{
	class Node{
		int data;
		Node right;
		Node left;
		Node (int data){
			this.data = data;
		}
	}
	static Node root;
	public Node Insert(Node root,int data){
		if(root == null){
			Node n = new Node(data);
			root = n;
			return root;
		}
		else if(root.data < data){
			root.right = Insert(root.right,data);
		}
		else {
			root.left = Insert(root.left,data);
		}
		return root;
	}
	public void insert(int data){
		root = Insert(root,data);
	}
    public int min(Node root){
        if(root == null)return -1;
        if(root.left == null) return root.data;
        return min(root.left);
    }
    public static void main(String[] args){
        microsoft1 a = new microsoft1();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            int c = sc.nextInt();
            a.insert(c);
        }
        System.out.println(a.min(root));

        
        
    }
    
}
