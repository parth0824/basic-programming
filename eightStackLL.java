class Node{
    int data;
    Node next;
    Node(int data){
        this.data = data;
    }
}
public class eightStackLL {
    Node top;
    public void push(int data){
        // implement this fn like insertAtBeg in singly linkedlist
        Node n = new Node(data);
        n.next = top;
        top = n;
    }
    public void pop(){
        if(isEmpty()){
            System.out.println("STACK UNDERFLOW");
            return;
        }
        int a = top.data;
        System.out.println(a);
        top = top.next;
    }
    public void print(){
        Node temp = top;
        while(temp != null){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
        System.out.println();
    }
    public boolean isEmpty(){
        if(top == null){
            return true;
        }
        return false;
    }
    public static void main(String[] args) {
        eightStackLL e = new eightStackLL();
        e.push(10);
        e.push(20);
        e.push(30);
        e.print();
        e.pop();
        e.print();
        e.pop();
        e.print();
        e.pop();
        e.print();
        e.pop();
    }    
}
