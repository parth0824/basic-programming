// ******************************************* DOUBLY LINKED LIST **************************************************
class Node{
    int data;
    Node next;
    Node pre;
    Node (int data){
        this.data = data;
    }
}
public class DoublyLinkedList{
    Node head;
    // ........................................... INSERTION START .......................................................
    public void insertAtBeg(int data){
        Node n = new Node (data);
        if(head == null){
            head = n;
            head.pre = null;
        }
        else{
            head.pre = n;
            n.pre = null;
            n.next = head;
            head = n;
        }
    }
    public void insertAtEnd(int data){
        Node n = new Node (data);
        if(head == null){
            head = n;
            head.pre = null;
        }
        else{
            Node temp = head;
            while(temp.next != null){
                temp = temp.next;
            }
            n.next = null;
            n.pre = temp;
            temp.next = n;
        }
    }
    public void insertAtAnyPosition(int data,int p){
        Node n = new Node (data);
        if(p > count() + 1 || p <= 1){
            System.out.println("INVALID OPERATION");
        }
        else if(head == null){
            head = n;
            head.pre = null;
        }
        else{
            Node temp = head;
            int s = 1;
            while(s < p-1){
                temp = temp.next;
                s++;
            }
            n.pre = temp;
            n.next = temp.next;
            temp.next = n;
            temp.next.pre = n;
        }
    }
    // ........................................... INSERTION END .......................................................
    // ........................................... DELETION START .......................................................
    public void deleteAtBeg(){
        if(head == null){
            System.out.println("INVALID OPERATION");
        }
        else{
            Node temp = head;
            temp.next.pre = null;
            head = temp.next;
            temp = null; 
        }
    }
    public void deleteAtEnd(){
        if(head == null){
            System.out.println("INVALID OPERATION");
        }
        else{
            Node temp = head;
            int q =1;
            while(q < count() - 1){
                q++;
                temp = temp.next;
            }
            temp.next = null;
            temp.pre = temp.pre.pre;
        }
    }
    public void deleteAtAnyPosition(int p){
        if(head == null){
            System.out.println("INVALID OPERATION");
        }
        else if(p > count() || p <= 1){
            System.out.println("INVALID OPERATION");
        }
        else{
            Node temp = head;
            int s = 1;
            while(s < p - 1){
                temp = temp.next;
                s++;
            }
            Node t = temp.next;
            t = null;
            temp.next = temp.next.next;
            temp.next.next.pre = temp;

        }
    }
        // ........................................... DELETION END .......................................................
    // ........................................... COUNT START .......................................................
    public int count(){
        Node temp = head;
        int a = 0;
        while(temp != null){
            a++;
            temp = temp.next;
        }
        return a;
    }
    // ........................................... COUNT END .......................................................
    // ........................................... PRINT START .......................................................
    public void print(){
        Node temp = head;
        while(temp !=  null){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
        System.out.println();
    }
        // ........................................... PRINT END .......................................................

    public static void main(String[] args){
        DoublyLinkedList d = new DoublyLinkedList();
        d.insertAtBeg(40);
        d.insertAtBeg(30);
        d.insertAtBeg(20);
        d.insertAtBeg(10);
        d.print();
        d.insertAtEnd(50);
        d.insertAtEnd(60);
        d.insertAtEnd(70);
        d.insertAtEnd(80);
        d.print();
        d.insertAtAnyPosition(45,5);
        d.print();
        d.deleteAtBeg();
        d.print();
        d.deleteAtEnd();
        d.print();
        d.deleteAtAnyPosition(4);
        d.print();
    }
}