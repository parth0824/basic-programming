class Node{
    int data;
    Node next;
    Node (int data){
        this.data = data;
    }
}
public class fourCircularWithHead{
    Node head;
    public int count(){
        int a = 0;
        Node temp = head;
        if(head == null){
            return a;
        }
        temp = temp.next;
        while(temp != head){
            a++;
            temp = temp.next;
        }

        return a+1;
    }
    public void print(){
        Node temp = head;
        System.out.print(head.data+" ");
        temp = temp.next;
        while(temp != head){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
        System.out.println();
    }
    public void insertAtEnd(int data){
        Node n = new Node(data);
        if(head == null){
            head = n;
            head.next = head;
        }
        else{
            Node temp = head;
            while(temp.next != head){
                temp= temp.next;
            }
            temp.next = n;
            n.next = head;
        }
    }
    public void insertAtBeg(int data){
        Node n = new Node(data);
        if(head == null){
            head = n;
            return;
        }
        int a = 1;
        Node temp = head;
        while(a < count() ){
            a++;
            temp = temp.next;
        }
        n.next = head;
        temp.next = n;
        head = n;        
    }
    public void insertAtAnyPosition(int data,int p){
        Node n = new Node(data);
        if(p <= 1){
            System.out.println("INVALID");
            return ;
        }
        else{
            Node temp = head;
            int a = 1;
            while(a < p-1){
                temp = temp.next;
                a++;
            }
            n.next = temp.next;
            temp.next = n;
        }
    }
    public void insertAtAnyPositionN(Node n , int p){
        if(p <=1){
            System.out.println("INVALID");
            return ;
        }
        else{
            int a = 1;
            Node temp = head;
            while(a < p-1){
                temp = temp.next;
                a++;
            }
            n.next = temp.next;
            temp.next = n;
        }
    }
    public void deleteAtBeg(){
        if(head == null){
            System.out.println("INVALID");
            return ;
        }
        else{
            Node temp = head;
            int a = 1;
            while(a < count()){
                a++;
                temp = temp.next;
            }
            temp.next = head.next;
            head = head.next;
        }
    }
    public void deleteAtEnd(){
        Node temp = head;
        int a =  1;
        while(a < count() -1){
            a++;
            temp = temp.next;
        }
        temp.next = null;
        temp.next = head;
    }
    public void deleteAtAnyPosition(int p){
        if(head == null || p==1){
            System.out.println("INVALID");
            return ;
        }
        else{
            Node temp = head;
            int a = 1;
            while(a < p-1){
                a++;
                temp = temp.next;
            }
            temp.next = temp.next.next;
        }
    }
    public void deleteAtAnyPositionD(int d){
        if(head == null || head.data == d){
            System.out.println("INVALID");
            return ;
        }
        else{
            Node temp = head;
            while(temp.next.data != d){
                temp = temp.next;
            }
            temp.next = temp.next.next;
        }
    }
    public void searchD(int d){
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
        System.out.println("NOT FOUND");
        
    }
    public static void main(String[] args) {
        fourCircularWithHead f = new fourCircularWithHead();
        f.insertAtEnd(10);
        f.insertAtEnd(20);
        f.insertAtEnd(30);
        f.insertAtEnd(40);
        f.print();
        f.insertAtBeg(-10);
        f.insertAtBeg(-20);
        f.insertAtBeg(-30);
        f.insertAtBeg(-40);
        f.print();
        f.insertAtAnyPosition(0, 5);
        f.print();
        Node a = new Node(100);
        f.insertAtAnyPositionN(a,10);    
        f.print();
        f.deleteAtBeg();
        f.print();
        f.deleteAtEnd();
        f.print();
        f.deleteAtEnd();
        f.print();
        f.deleteAtAnyPosition(4);
        f.print();
        f.deleteAtAnyPositionD(-10);
        f.print();
        f.deleteAtAnyPositionD(10);
        f.print();
        f.searchD(-30);
    }    
}