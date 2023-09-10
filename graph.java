class BinarySearchTree{
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
	public Node inOrder(Node root){
		if(root == null)
			return root;
		inOrder(root.left);
		System.out.print(root.data+" ");
		inOrder(root.right);
		return root;
	}
	public Node preOrder(Node root){
		if(root == null)
			return root;
		System.out.print(root.data+" ");
		preOrder(root.left);
		preOrder(root.right);
		return root;
	}
	public Node postOrder(Node root){
		if(root == null)
			return root;
		postOrder(root.left);
		postOrder(root.right);
		System.out.print(root.data+" ");
		return root;
	}
	public void delete(int data){
		DELETE(root,data);
	}
	public Node DELETE(Node root,int key){
		if(root == null){
			System.out.println("\nkey not found");
            return null;
		}
		else if(root.data == key){
			// if no child is there 
			if(root.left == null && root.right == null)
				return null;
			// if 1 child is present
			else if(root.left != null){
				return root.left;
			}
			else if(root.right != null){
				return root.right;
			}
			//if 2 chile are present 
			else {
                System.out.println(root.data);
				int m = max(root.left);
				root.data = m;
				DELETE(root.left,m);
				return root;
			}
		}
		else if(key > root.data){
			root.right = DELETE(root.right,key);
		}
		else {
			root.left = DELETE(root.left,key);
		}
		return root;
	}
	public int max(Node root){
		if(root.right == null)
			return root.data;
		return max(root.right);
	}
	public static void main(String[] args) {
		BinarySearchTree b = new BinarySearchTree();
		b.insert(10);
		b.insert(7);
		b.insert(12);
		b.insert(11);
		b.insert(30);
		b.insert(6);
		b.insert(8);
		b.insert(2);
		b.insert(9);
		b.inOrder(root);
		b.delete(2);
		System.out.println();
		b.inOrder(root);
		System.out.println();
		b.inOrder(root);
	}
}