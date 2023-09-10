class Node{
    int data;
    Node next;
    Node(int data){
        this.data = data;
        this.next = null;
    }
}
public class Dequeque {
    Node head;
    public void insertFront(int data){
        Node n = new Node(data);
        if(head == null){
            head = n;
        }
        else{
            n.next = head;
            head = n;     
        }
    }
    public void insertRear(int data){
        Node n = new Node(data);
        if(head == null){
            head = n;
        }
        else{
            Node temp = head;
            while(temp.next != null){
                temp = temp.next;
            }
            temp.next = n;
        }
    }
    public void deleteBeg(){
        Node temp = head;
        head = temp.next;
    }
    public void deleteEnd(){
        Node temp = head;
        while(temp.next.next != null){
            temp = temp.next;
        }
        temp.next = null;
    }
    public boolean isEmpty(){
        Node temp = head;
        if(temp.next == null){
            return true;
        }
        return false;
    }
    public void print(){
        Node temp = head;
        while(temp != null ){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
        System.out.println();
    }
    public static void main(String[] args){
        Dequeque d = new Dequeque();
        d.insertFront(10);
        d.insertFront(20);
        d.insertFront(30);
        d.insertFront(40);
        d.print();
        d.insertRear(0);
        d.insertRear(-10);
        d.insertRear(-20);
        d.insertRear(-30);
        d.insertRear(-40);
        d.print();
        d.deleteBeg();
        d.print();
        d.deleteEnd();
        d.print();
        System.out.print(d.isEmpty());
    }
}