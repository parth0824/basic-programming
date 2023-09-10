import java.util.*;
public class amazon {
    class Node{
        int data;
        Node next;
        Node (int data){
            this.data = data;
        }
    }
    static Node head;
    public void insert(int data) {
        Node n = new Node(data);
        if(head == null){
            head = n;
            return ;
        }
        Node temp = head;
        while(temp.next != null){
            temp = temp.next;
        }
        temp.next = n;        
    }
    public void print(){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
    }
    public Node extract(Node head){
        Node temp = head;
        Node e;
        while(){

        }

    }
    public static void main(String[] args) {
        amazon a= new amazon();
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            int b = sc.nextInt();
            a.insert(b);
        }
        a.print();
        Node ex = head;


    }
    
}
