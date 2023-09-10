class Node{
    int data;
    Node next;
    Node pre;
    Node(int data){
        this.data= data;
    }
}
public class threeDoublyWithHead{
    Node head;
    public int count(){
        int a = 0;
        Node temp = head;

        while(temp != null){
            a++;
            temp=temp.next;
        }return a;
    }
    public void print(){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.data+" ");
            temp= temp.next;
        }
        System.out.println();
    }
    public void insertAtEnd(int data){
        Node n = new Node(data);
        if(head == null){
            head = n;
        }
        else{
            Node temp = head;
            Node t = head;
            while(temp.next != null){
                t = temp;
                temp = temp.next;
            }
            temp.next = n;
            temp.pre = t;
        }
    }
    public void insertAtBeg(int data){
        Node n = new Node(data);
        if(head == null){
            head = n;
        }
        else{
            n.next = head;
            head.pre = n;
            head = n;
        }
    }
    public void insertAtAnyPosition(int data,int p){ // data and position
        Node n = new Node(data);
        if(p==1){
            System.out.println("INVALID");
            return ;
        }
        else if(head == null){
            head = n;
        }
        else{
            int a = 1;
            Node temp = head;
            while(a < p-1){
                temp = temp.next;
                a++;
            }
            n.next = temp.next;
            n.pre = temp;
            temp.next.pre = n;
            temp.next = n;
        }
    }
    public void insertAtAnyPositionN(Node n,int p){ // node and position
        if(head == null){
            head = n;
        }
        else{
            if(p == 1 || p == 0){
                System.out.println("INVALID");
                return ;
            }
            else{
                int a = 1;
                Node temp = head;
                while(a  < p-1){
                    temp = temp.next;
                    a++;
                }
                n.next = temp.next;
                n.pre = temp;
                temp.next.pre = n;
                temp.next = n;
            }
        }
    }
    public void deleteAtBeg(){
        if(head == null){
            System.out.println("INVALID");
return ;
        }
        else{
            head = head.next;
            head.pre = null;
        }
    }
    public void deleteAtEnd(){
        if(head == null){
            System.out.println("INVALID");
            return ;
        }
        else{
            Node temp = head;
            int a = 1;
            while(a < count()-1){
                a++;
                temp = temp.next;
            }
            temp.next = null;
        }
    }
    public void deleteAtAnyPositon(int p){ // position
        if(p <=1){
            System.out.println("INVALID");
            return ;
        }
        else{
            int a = 1;
            Node temp = head;
            while(a < p-1){
                a++;
                temp = temp.next;
            }

            temp.next = temp.next.next;
            temp.next.pre = temp;
        }
    }
    public void deleteAtAnyPositonD(int d){
        if(head == null || head.data == d){
            System.out.println("INVALID ");
            return ;
        }
        else{
            Node temp = head;
            while(temp.next.data != d){
                temp = temp.next;
            }
            temp.next = temp.next.next;
            temp.next.pre = temp;            
        }
    }
    public void search(int d){
        Node temp = head;
        int a = 1;
        while(a <= count()){
            if(temp.data == d){
                System.out.println(a);
                return ;
            }
            temp = temp.next;
            a++;            
        }
        System.out.println("INVALID");
    }
    public static void main(String[] args) {
        threeDoublyWithHead t = new  threeDoublyWithHead();
        t.insertAtEnd(10);
        t.insertAtEnd(20);
        t.insertAtEnd(30);
        t.insertAtEnd(40);
        t.print();
        t.insertAtBeg(0);
        t.insertAtBeg(-10);
        t.insertAtBeg(-20);
        t.insertAtBeg(-30);
        t.insertAtBeg(-40);
        t.print();
        t.insertAtAnyPosition(-5,5);
        t.insertAtAnyPosition(5,7);
        t.print();
        Node n = new Node(15);
        t.insertAtAnyPositionN(n,9);
        Node m = new Node(-15);
        t.insertAtAnyPositionN(m,4);
        t.print();
        t.deleteAtBeg();
        t.print();
        t.deleteAtEnd();
        t.print();
        t.deleteAtAnyPositon(6);
        t.print();
        t.deleteAtAnyPositonD(-20);
        t.print();
        t.deleteAtAnyPositonD(20);
        t.print();
        t.search(10);
        // Search a Node – search(Node n)
        // Deletion at given position – deleteAtPos(Node n)
    }    
}