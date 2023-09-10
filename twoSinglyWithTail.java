class Node {
    int data;
    Node next;
    Node(int data){
        this.data = data;
    }
}
public class twoSinglyWithTail{
    Node tail;
    Node head;
    public void print(){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
        System.out.println();
    }
    public void insertAtBeg(int data){
        Node n = new Node(data);
        if(head == null){
            head = n;
            tail = n;
            return ;
        }
        else{
            n.next = head;
            head = n;
        }
    }
    public void insertAtEnd(int data){
        Node n = new Node(data);
        if(head == null){
            head = n;
            tail = n;
            return ;
        }
        tail.next = n;
        tail = n;
    }
    public void insertAtAnyPosition(int data,int p){// using data
        // not work if p = 1  
        Node n = new Node(data);
        if(head == null){
            head = n;
            return ;
        }
        Node temp = head;
        int a = 1;
        while(a < p-1){
            a++;
            temp = temp.next;
        }
        n.next = temp.next;
        temp.next = null;
        temp.next = n;
    }
    public void insertAtAnyPositionN(Node n,int p){// usinig  node
        Node temp = head ;
        int a = 1;
        while(a < p-1){
            temp = temp.next;
            a++;
        }
        n.next = temp.next;
        temp.next = null;
        temp.next = n;
    }
    public void deleteAtBeg(){
        head = head.next;
    }
    public void deleteAtEnd(){
        int a = count();
        int b = 1;
        Node temp = head;
        while(b < a -1){
            temp = temp.next;
            b++;
        }
        temp.next = null;
    }
    public void deleteAtPos(int p){ // delete by position
        Node temp = head;
        int a = 1;
        while(a < p-1){
            temp = temp.next;
            a++;
        }
        Node tem = temp.next;
        temp.next = tem.next;
    }
    public void deleteAtPosD(int d){ // delete by data
        if(head.data == d){
            head.next = head;
        }
        else{
            Node temp = head;
            while(temp.next.data != d){
                temp = temp.next;
            }
            temp.next = temp.next.next;
        }
    }
    public int count(){
        Node temp = head;
        int t = 0;
        while(temp != null){
            t++;
            temp = temp.next;
        }
        return t;
    }
    public void searchD(int d){ // search with data
        int a = 1;int b =0;
        Node temp = head;
        for(int i=1;i<=count();i++){
            if(temp.data != d){
                temp = temp.next;
                a++;
            }
            else{
                System.out.println(a);b=1;
                return;
            }
        }
        System.out.println("NO FOUND");
    }
    public void searchN(Node n){ // search with node
        int a = 1;
        Node temp = head;
        for(int i=1;i<=count();i++){
            if(n != temp){
                temp = temp.next;
                a++;
            }
            else{
                System.out.println(a);
                return;
            }
        }
        System.out.println("NO FOUND");
    }
    public static void main(String[] args){
        twoSinglyWithTail t = new twoSinglyWithTail();
        t.insertAtBeg(-10);
        t.insertAtBeg(-20);
        t.insertAtBeg(-30);
        t.print();
        t.insertAtEnd(10);
        t.insertAtEnd(20);
        t.insertAtEnd(30);
        t.print();
        t.insertAtAnyPosition(0,4);
        t.print();
        Node n = new Node(-15);
        t.insertAtAnyPositionN(n,3);
        t.print();
        Node m = new Node(15);
        t.insertAtAnyPositionN(m,7);
        t.print();
        t.deleteAtBeg();
        t.print();
        t.deleteAtEnd();
        t.print();
        t.deleteAtPos(4);
        t.print();
    }
}